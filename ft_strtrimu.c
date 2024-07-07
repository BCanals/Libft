/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 16:05:52 by bizcru            #+#    #+#             */
/*   Updated: 2024/07/08 00:19:15 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrimu(char *s1, char const set)
{
	char			*rtrn;
	unsigned int	start;
	unsigned int	end;
	unsigned int	str_size;

	str_size = ft_strlen(s1);
	if (!s1 || !set)
		return ((char *)s1);
	start = 0;
	if (str_size == 0)
		end = 0;
	else
		end = str_size - 1;
	while (s1[start] == set && s1[start] != 0)
		start++;
	while (s1[end] == set && end > start)
		end--;
	rtrn = ft_strndup(&s1[start], end - start + 1);
	free(s1);
	return (rtrn);
}
