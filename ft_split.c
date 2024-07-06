/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:41:12 by bizcru            #+#    #+#             */
/*   Updated: 2024/07/06 01:32:43 by bizcru           ###   ########.fr       */
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
	{
		s++;
	}
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

unsigned int	get_next_start(char const *s, char c)
{
	unsigned char	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			return (i);
		i++;
		s++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char			**rtrn;
	unsigned int	i;
	unsigned int	k;

	if (!s)
		return (NULL);
	k = 0;
	rtrn = malloc(sizeof (char *) * (count_splits(s, c) + 1));
	while (*s)
	{
		while (*s == c)
		{
			s++;
		}
		i = get_next_start(s, c);
		rtrn[k] = ft_strndup(s, i);
		k++;
		s += i;
	}
	rtrn[k] = NULL;
	return (rtrn);
}
