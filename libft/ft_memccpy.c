/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecomte <jlecomte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 18:04:10 by jlecomte          #+#    #+#             */
/*   Updated: 2020/11/19 18:04:12 by jlecomte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned const char	*p_src;
	unsigned char		*p_dst;

	p_dst = (unsigned char *)dst;
	p_src = (unsigned const char *)src;
	while (n--)
	{
		if ((*p_dst++ = *p_src++) == (unsigned char)c)
			return ((void *)p_dst);
	}
	return (NULL);
}
