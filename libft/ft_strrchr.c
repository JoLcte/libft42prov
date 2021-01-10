/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecomte <jlecomte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 18:07:02 by jlecomte          #+#    #+#             */
/*   Updated: 2021/01/10 11:44:29 by jlecomte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memrchr(const void *s, int c, size_t n)
{
	unsigned char *p_str;

	p_str = (unsigned char *)s;
	while (n--)
	{
		if (*p_str-- == (unsigned char)c)
			return (p_str + 1);
	}
	return (NULL);
}

char		*ft_strrchr(const char *s, int c)
{
	const size_t	len = ft_strlen(s);

	s += len;
	return (ft_memrchr(s, c, len + 1));
}
