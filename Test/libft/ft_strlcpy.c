/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JoLecomte <jlecomte@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 12:03:49 by JoLecomte         #+#    #+#             */
/*   Updated: 2020/11/18 21:14:48 by JoLecomte        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t max_size)
{
	size_t len_src;

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
