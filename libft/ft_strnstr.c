/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JoLecomte <jlecomte@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 21:37:35 by JoLecomte         #+#    #+#             */
/*   Updated: 2020/11/19 10:56:14 by JoLecomte        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s_big, const char *s_small, size_t len)
{
	size_t	len_small;

	if (!*s_small)
		return ((char *)s_big);
	len_small = ft_strlen(s_small);
	while (*s_big && len >= len_small)
	{
		if (*(s_big) == *s_small && !ft_memcmp(s_big, s_small, len_small))
			return ((char *)(s_big));
		s_big++;
		len--;
	}
	return (NULL);
}
