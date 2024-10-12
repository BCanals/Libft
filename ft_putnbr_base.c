/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcanals- <bcanals-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:59:46 by bcanals-          #+#    #+#             */
/*   Updated: 2024/05/13 14:33:10 by bcanals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_base_size(char *base)
{
	int	i;

	i = 0;
	while (base[i] != 0)
		i++;
	return (i);
}

int	check_arguments(char *base)
{
	int	i;
	int	j;

	if (get_base_size(base) < 2)
		return (0);
	i = 0;
	while (base[i + 1] != 0)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j] != 0)
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	if (base[i] == '+' || base[i] == '-' || base[i] == ' '
		|| (base[i] >= 9 && base[i] <= 13))
		return (0);
	return (1);
}

void	ft_putnbr_base_easy(int nbr, char *base, int size)
{
	char	c;

	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	else if (nbr >= size)
		ft_putnbr_base_easy(nbr / size, base, size);
	c = base[nbr % size];
	write(1, &c, 1);
}

void	manage_int_min(int size, char *base)
{
	char	c;
	int		nbr;

	write(1, "-", 1);
	nbr = 2147483648 / size;
	ft_putnbr_base_easy(nbr, base, size);
	c = base[2147483648 % size];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	char	c;

	if (check_arguments(base) == 0)
		return ;
	size = get_base_size(base);
	if (nbr == -2147483648)
	{
		manage_int_min(size, base);
		return ;
	}
	else if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr >= size)
		ft_putnbr_base_easy(nbr / size, base, size);
	c = base[nbr % size];
	write(1, &c, 1);
}
/*
int main ()
{
	char c[] = "+123456789abcdef";
	ft_putnbr_base(42, c);	
}*/
