/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 00:18:22 by bizcru            #+#    #+#             */
/*   Updated: 2024/06/27 02:29:52 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main (int argc, char **argv)
{
	argc++;
	//int i = 0;
	/*
	while (i < 200)
	{
		printf("i = %i\nreal: %i\nmine : %i\n\n",i, tolower(i), ft_tolower(i));
		i++;
	}*/
	printf("real: %li\nmine: %li", strlcpy(argv[1]), ft_strlcpy(argv[1]));
}
