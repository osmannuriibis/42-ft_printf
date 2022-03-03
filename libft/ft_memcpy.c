/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 02:42:52 by oibis             #+#    #+#             */
/*   Updated: 2022/02/09 14:37:53 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memcpy işlevi 'boyut' baytı 'kaynak' adresinden başlayan nesneden 
hedef adresinden başlayan nesneye kopyalar. 
Bu işlevde kaynak dizisinin hedef dizisinin üzerine binmesi durumundaki 
davranışı tanımsızdır; 
üstüste binme olasılığı varsa memmove kullanın. 

1) memcpy() doesn’t check for overflow or \0 
2) memcpy() leads to problems when source and destination addresses overlap. 

memmove() is another library function that handles overlapping well */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (0);
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
