/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JoLecomte <jlecomte@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 20:11:12 by JoLecomte         #+#    #+#             */
/*   Updated: 2020/11/16 01:58:17 by JoLecomte        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n-- && *s1++ == *s2++ && *s1)
		;
	return ((unsigned char)*(s1 - 1) - (unsigned char)*(s2 - 1));
}
