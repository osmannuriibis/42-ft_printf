/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 23:13:32 by oibis             #+#    #+#             */
/*   Updated: 2022/03/09 14:59:54 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define HEXADECIMAL_U_BASE "0123456789ABCDEF"
# define HEXADECIMAL_L_BASE "0123456789abcdef"

int		ft_printf(const char *str, ...);

void	ft_putchar_tot(char c, size_t *tot);

void	put_char(int c, size_t *tot);

void	put_int(long i, size_t *tot);

void	put_string(char *str, size_t *tot);

void	put_unsigned_decimal(unsigned int d, size_t *tot);

void	put_hex_low(unsigned int hl, size_t *tot);

void	put_hex_up(unsigned int hu, size_t *tot);

void	put_pointer(void *p, size_t *tot);

#endif