/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JoLecomte <jlecomte@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 13:57:13 by JoLecomte         #+#    #+#             */
/*   Updated: 2020/11/11 22:39:52 by JoLecomte        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *p;
	p = (unsigned char *)s;
	while (n--)
		*p++ = 0;
}
