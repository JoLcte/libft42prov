/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecomte <jlecomte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 18:25:46 by jlecomte          #+#    #+#             */
/*   Updated: 2020/11/22 22:18:14 by jlecomte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}
