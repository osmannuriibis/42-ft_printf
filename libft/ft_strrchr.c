/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:49:14 by oibis             #+#    #+#             */
/*   Updated: 2022/02/10 19:13:58 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Str parametresi ile gösterilen karakter dizisinde c parametresi ile 
gösterilen değerin 
(unsigned char olarak değerlendirilir) son geçtiği yeri arar ve 
bu bellek adresini gösteren bir işaretçi geri döndürür.

Eğer str parametresi sonu boş karakter olan bir karakter dizisini gösteren 
bir işaretçi değilse, 
anlamsız bir sonuç elde edilir.*/
#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	char	*last;

	c %= 256;
	last = (0);
	while (*str)
	{
		if (*str == c)
		{
			last = (char *)str;
		}
		str++;
	}
	if (!c)
		return ((char *)str);
	return (last);
}
