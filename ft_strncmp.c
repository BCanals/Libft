/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcanals- <bcanals-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:22:44 by bcanals-          #+#    #+#             */
/*   Updated: 2024/06/28 00:14:23 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	int				retr;
	unsigned int	i;

	i = 0;
	retr = 0;
	while (s1[i] != 0 && s2[i] != 0 && i < n)
	{
		retr = s1[i] - s2[i];
		if (retr != 0)
			return (retr);
		i++;
	}
	if (i == n)
		return (retr);
	retr = s1[i] - s2[i];
	return (retr);
}
