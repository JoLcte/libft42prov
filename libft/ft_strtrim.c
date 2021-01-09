/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecomte <jlecomte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 15:26:03 by jlecomte          #+#    #+#             */
/*   Updated: 2021/01/09 14:35:50 by jlecomte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		in_set(char const *set, char c)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*s;

	if (!s1 || !set)
		return (NULL);
	while (in_set(set, *s1))
		s1++;
	len = ft_strlen(s1);
	s1 += (len - 1);
	if (len)
		while (in_set(set, *s1))
		{
			len--;
			s1--;
		}
	if (!(s = (char *)malloc(len + 1)))
		return (NULL);
	s[len] = '\0';
	while (len)
		s[--len] = *s1--;
	return (s);
}
