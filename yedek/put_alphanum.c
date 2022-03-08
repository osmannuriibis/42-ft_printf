/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_alphanum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:28:53 by oibis             #+#    #+#             */
/*   Updated: 2022/03/08 17:38:44 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void put_char(int c, size_t *tot)
{
    ft_putchar_tot(c, tot);
}

void put_string(char *str, size_t *tot)
{
    int i;
    if (!str)
        return;
    i = -1;
    while (str[++i])
        ft_putchar_tot(str[i], tot);
}

void put_int(int i, size_t *tot)
{
    if (i < 0)
    {
        ft_putchar_tot('-', tot);
        i = -i;
    }
    if (i >= 10)
        put_int(i / 10, tot);
    ft_putchar_tot((i % 10) + '0', tot);
}

void put_unsigned_decimal(unsigned int d, size_t *tot)
{
    if (d >= 10)
        put_unsigned_decimal(d / 10, tot);
    ft_putchar_tot(((int)d % 10) + '0', tot);
}