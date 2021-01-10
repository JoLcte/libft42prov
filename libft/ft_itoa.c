/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecomte <jlecomte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 15:56:56 by jlecomte          #+#    #+#             */
/*   Updated: 2021/01/10 11:48:56 by jlecomte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	len_nb(long int n)
{
	size_t	len;

	len = 0;
	while (n)
	{
		if (n < 0)
		{
			len += 1;
			n *= -1;
		}
		n /= 10;
		len++;
	}
	return (len);
}

static char		*nb_print(long int n, size_t len, char *s)
{
	if (n == 0)
		*s = '0';
	if (n < 0)
	{
		*s = '-';
		n *= -1;
	}
	s[len] = '\0';
	while (n)
	{
		s[--len] = n % 10 + '0';
		n /= 10;
	}
	return (s);
}

char			*ft_itoa(int n)
{
	char		*s;
	size_t		len;
	long int	nb;

	len = 0;
	nb = n;
	if (nb == 0)
		len = 1;
	else
		len = len_nb(nb);
	if (!(s = (char *)malloc(len + 1)))
		return (NULL);
	s = nb_print(nb, len, s);
	return (s);
}
