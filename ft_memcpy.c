/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:21:23 by bizcru            #+#    #+#             */
/*   Updated: 2024/07/01 20:55:35 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *dest2;
	const char *src2;

	dest2 = dest;
	src2 = src;
	while (n > 0)
	{
		dest2[n] = src2[n];
		n--;
	}
	return (dest);
}
