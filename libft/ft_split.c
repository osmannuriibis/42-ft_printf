/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 03:02:36 by oibis             #+#    #+#             */
/*   Updated: 2022/02/09 14:38:13 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: split string, with specified character as delimiter, into an array
**			of strings
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns an array of strings obtained by
**	splitting ’s’ using the character ’c’ as a delimiter. The array must be
**	ended by a NULL pointer.
*/
#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	headofword;

	i = 0;
	headofword = 1;
	while (*str)
	{
		if (*str != c && headofword)
		{
			headofword = 0;
			i++;
		}
		else if (*str == c)
			headofword = 1;
		str++;
	}
	return (i);
}

static char	*eachstr(const char *s, int start, int finish)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *src, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	if (!src)
		return (0);
	split = malloc((count_words(src, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	i = -1;
	j = 0;
	index = -1;
	while (++i <= ft_strlen(src))
	{
		if (src[i] != c && index < 0)
			index = i;
		else if ((src[i] == c || i == ft_strlen(src)) && index >= 0)
		{
			split[j++] = eachstr(src, index, i);
			index = -1;
		}
	}
	split[j] = 0;
	return (split);
}
