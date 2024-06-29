/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmov.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:50:13 by bizcru            #+#    #+#             */
/*   Updated: 2024/06/28 16:09:31 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, long unsigned int n)
{
	void *copy;

	copy = malloc(n);
	ft_memcpy(copy, src, n);
	ft_memcpy(dest, copy, n);
	return (dest);
}
