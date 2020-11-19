/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JoLecomte <jlecomte@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 14:47:11 by JoLecomte         #+#    #+#             */
/*   Updated: 2020/11/17 00:54:03 by JoLecomte        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*p_src;
	unsigned char		*p_dst;

	p_src = (const unsigned char *)src;
	p_dst = (unsigned char *)dst;
	if (p_src < p_dst)
	{
		p_src += len - 1;
		p_dst += len - 1;
		while (len--)
			*p_dst-- = *p_src--;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
