/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecomte <jlecomte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 20:46:10 by jlecomte          #+#    #+#             */
/*   Updated: 2020/11/21 21:17:02 by jlecomte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		in_charset(char const *s, char c)
{
	if (*s == c)
		return (1);
	return (0);
}

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && in_charset(s, c))
			s++;
		if (*s && !in_charset(s, c))
		{
			while (*s && !in_charset(s, c))
				s++;
			count++;
		}
	}
	return (count);
}

static size_t	len_word(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && !in_charset(s, c))
	{
		len++;
		s++;
	}
	return (len);
}

static char		*malloc_word(char const *s, size_t len)
{
	char	*word;
	char	*p;

	if (!(word = (char *)malloc(len + 1)))
		return (NULL);
	p = word;
	while (len--)
		*word++ = *s++;
	*word++ = '\0';
	return (p);
}

char			**ft_split(char const *s, char c)
{
	size_t		words;
	char		**tab;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (*s)
	{
		while (*s && in_charset(s, c))
			s++;
		if (*s && !in_charset(s, c))
		{
			*tab++ = malloc_word(s, len_word(s, c));
			s += len_word(s, c);
		}
	}
	*tab = NULL;
	return (tab - words);
}
