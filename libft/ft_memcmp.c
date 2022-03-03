/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 01:07:28 by oibis             #+#    #+#             */
/*   Updated: 2022/02/09 14:37:50 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memcmp işlevi belleğin s1 de başlayan boyut baytı ile s2 de başlayan boyut 
baytını karşılaştırır. Dönen değer, ilk farklı bayt çiftleri arasındaki farkın 
işaretine bağlıdır (önce unsigned char türünden nesneler olarak yorumlanır, 
sonra da int türüne terfi ettirilirler).
İki bloğun içeriği aynı ise memcmp sıfır ile döner. */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
