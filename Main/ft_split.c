/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecomte <jlecomte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 20:46:10 by jlecomte          #+#    #+#             */
/*   Updated: 2021/01/07 18:05:39 by jlecomte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char		**free_tab(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static size_t	count_wd(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		count++;
		while (*s && *s == c)
			s++;
	}
	return (count);
}

static size_t	size_wd(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static char		*get_wd(char const *s, size_t len_wd)
{
	char	*word;
	char	*p;

	if (!(word = (char *)malloc(len_wd + 1)))
		return (NULL);
	p = word;
	while (len_wd--)
		*word++ = *s++;
	*word++ = '\0';
	return (p);
}

char			**ft_split(char const *s, char c)
{
	size_t		nb_wd;
	size_t		len_wd;
	char		**tab;

	if (!s)
		return (NULL);
	while (*s && *s == c)
		s++;
	nb_wd = count_wd(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (nb_wd + 1))))
		return (NULL);
	while (*s)
	{
		len_wd = size_wd(s, c);
		*tab++ = get_wd(s, len_wd);
		if (!*(tab - 1))
			return (free_tab(tab));
		s += len_wd;
		while (*s && *s == c)
			s++;
	}
	*tab = NULL;
	return (tab - nb_wd);
}
