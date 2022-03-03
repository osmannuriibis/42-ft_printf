/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 02:32:29 by oibis             #+#    #+#             */
/*   Updated: 2022/02/09 14:37:59 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Bu işlev, c değerini (unsigned char türüne dönüştürerek) blok adresinden 
başlayan nesnenin ilk boyut baytının her birine kopyalar 
ve blok’un değeri ile döner.
 */
#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)dest;
	while (i < len)
		temp[i++] = (unsigned char)c;
	return (dest);
}
