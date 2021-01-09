/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecomte <jlecomte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 18:05:32 by jlecomte          #+#    #+#             */
/*   Updated: 2021/01/08 18:35:14 by jlecomte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const size_t len_src = ft_strlen(src);
	const size_t len_dst = ft_strlen(dst);

	if (size == 0 || len_dst >= size)
		return (len_src + size);
	size -= len_dst + 1;
	dst += len_dst;
	while (*src && size--)
		*dst++ = *src++;
	*dst = '\0';
	return (len_src + len_dst);
}
