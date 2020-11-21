/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecomte <jlecomte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 18:05:17 by jlecomte          #+#    #+#             */
/*   Updated: 2020/11/19 18:05:19 by jlecomte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len_s;
	char	*p;

	len_s = ft_strlen(s);
	if (!(p = (char *)malloc(len_s + 1)))
		return (NULL);
	ft_memcpy(p, s, len_s);
	p[len_s] = '\0';
	return (p);
}
