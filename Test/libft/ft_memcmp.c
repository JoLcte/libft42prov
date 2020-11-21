/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecomte <jlecomte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 18:03:54 by jlecomte          #+#    #+#             */
/*   Updated: 2020/11/19 18:03:55 by jlecomte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *p_s1;
	const unsigned char *p_s2;

	p_s1 = s1;
	p_s2 = s2;
	while (n--)
	{
		if (*p_s1++ != *p_s2++)
			return ((int)(*(p_s1 - 1) - *(p_s2 - 1)));
	}
	return (0);
}
