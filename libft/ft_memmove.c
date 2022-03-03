/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 01:13:10 by oibis             #+#    #+#             */
/*   Updated: 2022/02/09 14:37:56 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memmove işlevi boyut baytı kaynak’tan hedef’e birbirlerinin 
üstüne binseler bile kopyalar. 
Üstüste binme durumunda, işlev, kaynak bloğundaki baytları 
hedef bloğuna dikkatle kopyalar.
İşlev, hedef'in değeri ile döner. */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d > s)
		while (len--)
			d[len] = s[len];
	else
		ft_memcpy(d, s, len);
	return (dst);
}
