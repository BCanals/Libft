/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcanals- <bcanals-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:18:02 by bcanals-          #+#    #+#             */
/*   Updated: 2024/06/28 12:13:04 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		rtrn;
	int		i;
	int		sign;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	sign = 1;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	if (ft_strncmp("9223372036854775808", &str[i], 20) <= 0)
		return (-1);
	rtrn = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		rtrn = rtrn * 10 + str[i] - 48;
		i++;
	}
	rtrn *= sign;
	return (rtrn);
}
