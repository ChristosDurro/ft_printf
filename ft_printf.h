/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdurro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 13:39:45 by cdurro            #+#    #+#             */
/*   Updated: 2023/05/18 10:29:36 by cdurro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<stdlib.h>
# include<unistd.h>
# include"./libft/libft.h"

int		ft_check_base(char *base);
int		ft_printf(const char *str, ...);

void	ft_putchar(char c, int *total_length);
void	ft_putstr(char *str, int *total_length);
void	ft_string_format(va_list args, int *total_length, int space);
void	ft_integer_format(int *total_length, int i_converted);
void	ft_unsigned_format(va_list args, int *total_length);
void	ft_pointer_format(va_list args, int *total_length);
void	ft_hex_format(char c, int *total_length, unsigned int u_converted);
void	ft_putnbr(int nbr, int *total_length);
void	ft_putunbr_base(unsigned int nbr, char *base, int *total_length);
void	ft_putlnbr_base(unsigned long nbr, char *base, int *total_length);

#endif
