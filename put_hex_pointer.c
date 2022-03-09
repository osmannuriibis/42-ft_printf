/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_hex_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:45:44 by oibis             #+#    #+#             */
/*   Updated: 2022/03/09 14:51:05 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	put_hex_low(unsigned int hl, size_t *tot)
{
	if (hl >= 16)
		put_hex_low(hl / 16, tot);
	ft_putchar_tot(HEXADECIMAL_L_BASE[hl % 16], tot);
}

void	put_hex_up(unsigned int hu, size_t *tot)
{
	if (hu >= 16)
		put_hex_up(hu / 16, tot);
	ft_putchar_tot(HEXADECIMAL_U_BASE[hu % 16], tot);
}

void	put_pointer_prefix(size_t *tot)
{
	ft_putchar_tot('0', tot);
	ft_putchar_tot('x', tot);
}

void	put_p_adres(size_t hl, size_t *tot)
{
	if (hl >= 16)
		put_p_adres(hl / 16, tot);
	ft_putchar_tot(HEXADECIMAL_L_BASE[hl % 16], tot);
}

void	put_pointer(void *p, size_t *tot)
{
	put_pointer_prefix(tot);
	put_p_adres((size_t)p, tot);
}
