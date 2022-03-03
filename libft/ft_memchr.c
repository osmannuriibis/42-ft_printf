/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:11:07 by oibis             #+#    #+#             */
/*   Updated: 2022/02/09 14:36:56 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*According to the man this function locates the first occurence of c (converted
 * to an unsigned char) in string s. ft_memchr returns a pointer to the byte
 * located, or NULL if no such byte exists within n bytes.
 
 Bu işlev blok adresinden başlayan nesnenin ilk boyut baytı içindeki ilk c 
 (bir unsigned char'a dönüştürülmüş) baytını bulur. 
 Dönen değer baytın konumunu içeren bir göstericidir. 
 c baytı bulunamazsa bir boş gösterici döner.
 
 */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
