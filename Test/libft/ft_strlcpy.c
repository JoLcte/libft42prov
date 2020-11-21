/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecomte <jlecomte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 18:05:46 by jlecomte          #+#    #+#             */
/*   Updated: 2020/11/21 21:05:48 by jlecomte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t max_size)
{
	size_t len_src;

	if (!dst || !src)
		return (0);
	len_src = ft_strlen(src);
	if (len_src < max_size)
		ft_memcpy(dst, src, len_src + 1);
	if (len_src > max_size - 1)
	{
		ft_memcpy(dst, src, max_size - 1);
		*(dst + max_size - 1) = '\0';
	}
	return (len_src);
}
