/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecomte <jlecomte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 18:12:41 by jlecomte          #+#    #+#             */
/*   Updated: 2020/11/22 23:58:21 by jlecomte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (len > len_s - start)
		len = len_s - start;
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	ft_memcpy(p, s + start, len);
	p[len] = '\0';
	return (p);
}
