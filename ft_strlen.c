/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 01:00:25 by bizcru            #+#    #+#             */
/*   Updated: 2024/06/27 01:17:04 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long unsigned int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*s != 0)
	{
		i++;
		s++;
	}
	return (i);
}