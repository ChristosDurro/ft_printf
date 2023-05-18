/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdurro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:23:41 by cdurro            #+#    #+#             */
/*   Updated: 2023/05/17 12:22:08 by cdurro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_hex_format(char c, int *total_length, unsigned int u_converted)
{
	if (c == 'x')
		ft_putunbr_base(u_converted, "0123456789abcdef", total_length);
	else
		ft_putunbr_base(u_converted, "0123456789ABCDEF", total_length);
}
