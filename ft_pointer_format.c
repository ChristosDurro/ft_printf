/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdurro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:14:01 by cdurro            #+#    #+#             */
/*   Updated: 2023/05/15 11:57:36 by cdurro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_pointer_format(va_list args, int *total_length)
{
	unsigned long	u_converted;

	u_converted = va_arg(args, unsigned long);
	if (u_converted == 0)
		ft_putstr("(nil)", total_length);
	else
	{
		ft_putstr("0x", total_length);
		ft_putlnbr_base(u_converted, "0123456789abcdef", total_length);
	}
}
