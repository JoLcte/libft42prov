/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JoLecomte <jlecomte@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 14:03:16 by JoLecomte         #+#    #+#             */
/*   Updated: 2020/11/17 00:44:20 by JoLecomte        ###   ########.fr       */
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
