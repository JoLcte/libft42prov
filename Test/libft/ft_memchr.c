/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecomte <jlecomte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 18:03:36 by jlecomte          #+#    #+#             */
/*   Updated: 2020/11/19 18:03:39 by jlecomte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *p_str;

	p_str = (unsigned char *)s;
	while (n--)
	{
		if (*p_str++ == (unsigned char)c)
			return (p_str - 1);
	}
	return (NULL);
}
