/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcanals- <bcanals-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:30:19 by bcanals-          #+#    #+#             */
/*   Updated: 2024/06/28 15:27:43 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long unsigned int	ft_strlcpy(char *dest, char *src, long unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while (i < (size - 1) && src[i] != 0)
		{
			dest[i] = src[i];
			i++;
		}
		if (i <= size - 1)
			dest[i] = 0;
	}
	while (src[i] != 0)
		i ++;
	return (i);
}
