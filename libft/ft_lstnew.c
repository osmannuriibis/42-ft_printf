/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:49:21 by oibis             #+#    #+#             */
/*   Updated: 2022/02/09 15:43:33 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
* Malloc kullanarak memoryden yer ayırılır ve yeni
* element çıktı olarak verilir. Content değişkeni
* ‘content’ parametresinin değeri ile başlatılır.
* Next değişkeni ise NULL değeri ile başlatılmalıdır. 
*/
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}
