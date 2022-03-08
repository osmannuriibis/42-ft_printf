/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_hex.pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:45:44 by oibis             #+#    #+#             */
/*   Updated: 2022/03/08 17:25:10 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

void put_hex_low(size_t hl, size_t *tot)
{
	if (hl >= 16)
		put_hex_low(hl / 16, tot);
	ft_putchar_tot(HEXADECIMAL_L_BASE[hl % 16], tot);
}

void put_hex_up(size_t hu, size_t *tot)
{
	if (hu >= 16)
		put_hex_up(hu / 16, tot);
	ft_putchar_tot(HEXADECIMAL_U_BASE[hu % 16], tot);
}

void put_pointer_prefix(size_t *tot)
{
	ft_putchar_tot('0', tot);
	ft_putchar_tot('x', tot);
}

void put_pointer(void *p, size_t *tot)
{
	put_pointer_prefix(tot);
	put_hex_low((size_t)p, tot);
}