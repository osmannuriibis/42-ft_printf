/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:36:31 by oibis             #+#    #+#             */
/*   Updated: 2022/02/10 19:16:51 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: locate character in string (first occurrence)
**
** DESCRIPTION:
** 		The strchr() function locates the first occurrence of c (converted to a
**	char) in the string pointed to by s.  The terminating null character is
**	considered to be part of the string; therefore if c is `\0', the func-
**	tions locate the terminating `\0'.
*/
/* 
*   Fonksiyonun 1. parametresi gönderilen yazının başlangıç adresi, 
*   ikinci parametresi bir karakterin sıra numarasıdır. 
*   Fonksiyon yazı içinde c karakterini arar ve ilk bulduğu c karakterinin 
adresiyle geri döner.
*   Eğer yazı içinde c karakteri yoksa fonksiyon NULL adresi ile geri döner. 
*/
#include "libft.h"

char	*ft_strchr(const char *ptr, int c)
{	
	c %= 256;
	while (*ptr)
	{
		if (*ptr == c)
			return ((char *)ptr);
		++ptr;
	}
	if (c == '\0')
		return ((char *)ptr);
	return (0);
}
