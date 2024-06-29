/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 14:38:42 by bizcru            #+#    #+#             */
/*   Updated: 2024/06/28 15:10:25 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s)
{
	char *rtrn;
	char *i;

	rtrn = malloc(ft_strlen(s) + 1);
	i = rtrn;
	while (*s)
	{
		*i = *s;
		i++;
		s++;
	}
	*i = 0;
	return (rtrn);
}
