/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JoLecomte <jlecomte@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 11:39:09 by JoLecomte         #+#    #+#             */
/*   Updated: 2020/11/08 11:39:43 by JoLecomte        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *s;

	s = (unsigned char)b;
	while (len--)
		*b++ = (unsigned char)c;
	return (s);
}
