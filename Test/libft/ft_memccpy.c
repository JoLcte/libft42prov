/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JoLecomte <jlecomte@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 20:33:23 by JoLecomte         #+#    #+#             */
/*   Updated: 2020/11/12 01:15:07 by JoLecomte        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned const char *p_src;
	unsigned char *p_dst;

	p_dst = (unsigned char *)dst;
	p_src = (unsigned const char *)src;
	while (n--)
		if ((*p_dst++ = *p_src++) == (unsigned char)c)
			return ((void *)p_dst);
	return (NULL);
}
