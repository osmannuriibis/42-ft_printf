/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:54:16 by oibis             #+#    #+#             */
/*   Updated: 2022/02/10 14:44:29 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strnstr() function locates the first occurrence of the null-terminated 
string s2 in the string s1, where not more than n characters are searched. 
Characters that appear after a `\0' character are not searched. */
#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	int	size;
	int	i;

	if (!*str2)
		return ((char *)str1);
	size = ft_strlen(str2);
	while (*str1 && len > 0)
	{
		i = 0;
		while (*str1 && str1[i] == str2[i] && len - i)
		{
			if (i + 1 == size)
				return ((char *)str1);
			i++;
		}
		str1++;
		len--;
	}
	return (0);
}
