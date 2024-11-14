/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:44:48 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/10/22 11:44:55 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_memset ft_bzero.c ft_memcpy.c ft_memmove.c

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

int	main(void)

{
// test ft_memset.c
	printf("\ntest ft_memset.c ....................\n");
	char string[50] = "1234567890";
	printf("\nBefore ft_memset(): %s\n", string);

	ft_memset(string + 9, '.', 3);

	printf("After  ft_memset(): %s\n", string);


	char string1[50] = "1234567890";
	printf("\nBefore    memset(): %s\n", string1);

	memset(string1 + 9, '.', 3*sizeof(char));

	printf("After     memset(): %s\n", string1);
}
/*
// test ft_bzero.c
	printf("\ntest ft_bzero.c ....................\n");

// test ft_memcpy.c
	printf("\ntest ft_memcpy.c ....................\n");
	char dest[] = "123456789";
	printf("\n");
	printf ("before ft_memcpy: %s\n", dest);
	ft_memcpy(dest + 3, dest, 4 * sizeof(char));
	printf ("after  ft_memcpy: %s\n", dest);

	char dest1[] = "123456789";
	printf ("  before   memcpy: %s\n", dest1);
	memcpy(dest1 + 3, dest1, 4 * sizeof(char));
	printf ("  after    memcpy: %s\n", dest1);

// test ft_memmove.c
	printf("\ntest ft_memmove.c ....................\n");
	char string[20] = "123456789";
	printf("\nBefore ft_memmove: %s\n", string);
	ft_memmove(string + 3, string, 4 * sizeof(char));
	printf("After  ft_memmove: %s\n", string);

	char string1[20] = "123456789";
	printf("  Before    memmove: %s\n", string1);
	memmove(string1 + 3, string1, 4 * sizeof(char));
	printf("  After     memmove: %s\n", string1);

}*/

