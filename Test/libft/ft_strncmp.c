/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecomte <jlecomte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 18:06:32 by jlecomte          #+#    #+#             */
/*   Updated: 2020/11/19 18:06:35 by jlecomte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n-- && *s1++ == *s2++ && *s1)
		;
	return ((unsigned char)*(s1 - 1) - (unsigned char)*(s2 - 1));
}
