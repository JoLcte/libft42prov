/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecomte <jlecomte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 20:32:47 by jlecomte          #+#    #+#             */
/*   Updated: 2020/11/22 23:38:05 by jlecomte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *begin;

	if (!lst || !f)
		return (NULL);
	if (!(begin = ft_lstnew(f(lst->content))))
		return (NULL);
	new = begin;
	lst = lst->next;
	while (lst)
	{
		if (!(new->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&begin, del);
			return (NULL);
		}
		new = new->next;
		lst = lst->next;
	}
	return (begin);
}
