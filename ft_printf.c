/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdurro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 13:37:41 by cdurro            #+#    #+#             */
/*   Updated: 2023/05/15 15:27:56 by cdurro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include<stdio.h>
#include"ft_check_base.c"
#include"ft_hex_format.c"
#include"ft_integer_format.c"
#include"ft_unsigned_format.c"
#include"ft_pointer_format.c"
#include"ft_string_format.c"
#include"ft_putchar.c"
#include"ft_putstr.c"
#include"ft_putnbr.c"
#include"ft_putlnbr_base.c"
#include"ft_putunbr_base.c"

static void	ft_format(va_list va, char c, int *total_length)
{
	if (c == 'c')
		ft_putchar(va_arg(va, int), total_length);
	else if (c == 's')
		ft_string_format(va, total_length);
	else if (c == 'i' || c == 'd')
		ft_integer_format(va, total_length);
	else if (c == 'p')
		ft_pointer_format(va, total_length);
	else if (c == 'u')
		ft_unsigned_format(va, total_length);
	else if (c == 'x')
		ft_hex_format(va, c, total_length);
	else if (c == 'X')
		ft_hex_format(va, c, total_length);
	else
		ft_putchar('%', total_length);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		total_length;
	int		i;

	va_start(args, str);
	total_length = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_format(args, str[i + 1], &total_length);
			i++;
		}
		else
			ft_putchar(str[i], &total_length);
		i++;
	}
	va_end(args);
	return (total_length);
}

int main()
{
	int num = 256;
    printf("hello%xhello\n", num);    // right-aligned output
    printf("hello%#xhello\n", num);   // left-aligned output
}

