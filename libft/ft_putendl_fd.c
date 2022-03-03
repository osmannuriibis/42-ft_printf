/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 01:00:45 by oibis             #+#    #+#             */
/*   Updated: 2022/02/09 14:38:04 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ‘s’ string çıktısını sonunda new line karakteri ile
birlikte verilen file descriptora yazar.
 */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
