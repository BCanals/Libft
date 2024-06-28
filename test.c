/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 00:18:22 by bizcru            #+#    #+#             */
/*   Updated: 2024/06/28 12:33:55 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>


int main ()//int argc, char **argv)
{
	//argc++;
	//printf("input: %s\n", argv[1]);
	int i = 0;
	
	while (i < 258)
	{
		//printf("%i\n", i);
		//if (isprint(i) != ft_isprint(i))
			printf("i = %i\nreal: %i\nmine : %i\n\n", i, isprint(i), ft_isprint(i));
		i++;
	}
	/*char *dst1;
	char *dst2;
	int sizeA = atoi(argv[2]);
	int sizeB = atoi(argv[2]);
	dst1 = malloc(sizeA);
	dst2 = malloc(sizeA);
	strlcpy(dst1, argv[1], sizeA);
	strlcpy(dst2, argv[1], sizeA);
	printf("real: %li, %s\nmine: %li, %s\n", strlcat(dst1, argv[3], sizeB), dst1, ft_strlcat(dst2, argv[3], sizeB), dst2);
	free(dst2);
	free(dst1);
	*/
	//printf("Real: %i\nMine: %i\n", isprint(argv[1][0]), ft_isprint(argv[1][0]));
}
