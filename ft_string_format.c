/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdurro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:54:02 by cdurro            #+#    #+#             */
/*   Updated: 2023/05/15 11:56:24 by cdurro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
#include"libft/libft.h"
#include<stdio.h>

void	ft_string_format(va_list args, int *total_length)
{
	char	*string_ptr;

	string_ptr = va_arg(args, char *);
	if (string_ptr == NULL)
		ft_putstr("(null)", total_length);
	else
		ft_putstr(string_ptr, total_length);
}
