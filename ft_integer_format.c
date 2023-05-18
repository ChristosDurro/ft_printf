/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdurro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:10:25 by cdurro            #+#    #+#             */
/*   Updated: 2023/05/17 11:42:53 by cdurro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_integer_format(int *total_length, int i_converted)
{
	if (i_converted == 0)
		ft_putchar('0', total_length);
	else
		ft_putnbr(i_converted, total_length);
}
