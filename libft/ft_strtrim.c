/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 00:30:27 by oibis             #+#    #+#             */
/*   Updated: 2022/02/09 14:38:49 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)

{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
/* {
	size_t	start;
	size_t	end;
	size_t	set_size;
	size_t	s1_size;
	int		multipleofset;
	int		i;
	char	*str;

	multipleofset = 0;
	start = 0;
	if (!s1 || !set)
		return (0);
	set_size = ft_strlen(set);
	s1_size = ft_strlen(s1);
	while (!ft_strncmp(&s1[multipleofset], set, set_size))
	{
		multipleofset += set_size;
		start = multipleofset;
	}

	s1 = s1 + start;
	s1_size = ft_strlen(s1);
	multipleofset = set_size;
	end = 0;
	while (!ft_strncmp( &s1[s1_size - multipleofset], set, set_size ) )
	{
		end = multipleofset;
		multipleofset += set_size;
	}
	s1 -= start;

	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (0);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
} */