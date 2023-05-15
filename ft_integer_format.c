/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdurro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:10:25 by cdurro            #+#    #+#             */
/*   Updated: 2023/05/15 11:58:20 by cdurro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_integer_format(va_list args, int *total_length)
{
	int	i_converted;

	i_converted = va_arg(args, int);
	if (i_converted == 0)
		ft_putchar('0', total_length);
	else
		ft_putnbr(i_converted, total_length);
}
