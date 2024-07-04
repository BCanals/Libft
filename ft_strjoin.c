/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcanals- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:49:18 by bcanals-          #+#    #+#             */
/*   Updated: 2024/07/04 20:05:11 by bcanals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	size;
	char			*rtrn;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	rtrn = malloc(size);
	if (rtrn == NULL)
		return (NULL);
	ft_memmove((void *)rtrn, s1, ft_strlen(s1));
	rtrn += ft_strlen(s1);
	ft_memmove(rtrn, s2, ft_strlen(s2));
	rtrn[size] = '\0';
	rtrn -= ft_strlen(s1);
	return (rtrn);
}
