/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:41:12 by bizcru            #+#    #+#             */
/*   Updated: 2024/07/08 00:16:17 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static unsigned int	count_splits(char const *s, char c)
{
	unsigned int	j;

	j = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		if (*s == c)
		{
			j++;
			while (*(++s) == c)
			{
			}
		}
		else
		{
			s++;
			if (!*s)
				j++;
		}
	}
	return (j);
}

static void	fill(char const *s, char c, char **rtrn)
{
	unsigned int	i;
	unsigned int	k;
	char			*substr;

	i = 0;
	k = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			return ;
		while (s[i] && s[i] != c)
			i++;
		substr = ft_substr(s, 0, i);
		rtrn[k] = ft_strtrimu(substr, c);
		k++;
		s += i;
		i = 0;
	}
}

static int	check(char **rtrn, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (!rtrn[i++])
		{
			while (size)
				free(rtrn[size--]);
			free(rtrn[0]);
			free(rtrn);
			return (0);
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char			**rtrn;
	unsigned int	size;

	if (!s)
		return (NULL);
	if (!s[0])
	{
		rtrn = malloc(sizeof(char *));
		if (!rtrn)
			return (NULL);
		rtrn[0] = NULL;
		return (rtrn);
	}
	size = count_splits(s, c);
	rtrn = malloc(sizeof (char *) * (size + 1));
	if (!rtrn)
		return (NULL);
	fill(s, c, rtrn);
	rtrn[size] = NULL;
	if (!check(rtrn, size))
		return (NULL);
	return (rtrn);
}
