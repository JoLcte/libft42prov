/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecomte <jlecomte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 18:05:32 by jlecomte          #+#    #+#             */
/*   Updated: 2020/11/20 13:15:53 by jlecomte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t max_size)
{
	size_t len_src;
	size_t len_dst;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (max_size == 0 || len_dst >= max_size)
		return (len_src + max_size);
	max_size -= (len_dst + 1);
	while (*dst)
		dst++;
	while (*src && max_size--)
		*dst++ = *src++;
	*dst = '\0';
	return (len_src + len_dst);
}
