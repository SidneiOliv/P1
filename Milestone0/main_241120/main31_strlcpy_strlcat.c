/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main31_strlcpy_strlcat.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:44:48 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/04 19:49:24 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_strlcat

#include "libft.h"
#include <bsd/string.h>
//cc -lbsd main32_strlcat.c ft_strlcpy.c ft_strlcat.c ft_strlen.c

int	main(void)
{
/*
// test strlcpy
	printf("\ntest ft_strlcpy.c ....................\n");
	char dest[] = "123456789";
	char src[] = "abcdefghij";
	printf ("before, src : %s\n\n", src);
	printf ("before, dest: %s\n", dest);
	printf ("   return  : %zu\n", ft_strlcpy(dest, src, 10));
	printf ("after, dest : %s\n\n", dest);
	char dest1[] = "123456789";
	printf ("before,dest1: %s\n", dest1);
	printf ("  strlcpy  : %zu\n", strlcpy(dest, src, 10));
	printf ("after, dest1: %s\n", dest1);
*/
//	test strlcat
	printf("\ntest ft_strlcat.c ....................\n");
	char	destin[] = "Learning ";
	char	source[] = "to fly";
	int	num = 12;
	printf ("destin  : %s\n", destin);
	printf ("source  : %s\n", source);
	printf ("num     : %d\n", num);
	printf ("ft_strlcat : %zu\n", ft_strlcat(destin, "lorem ipsum dolor sit amet", 15));
	printf ("   destin  : %s\n\n", destin);
	char	destin2[] = "Learning ";
	printf (" strlcat  : %zu\n", strlcat(destin2, "lorem ipsum dolor sit amet", 15));
	printf ("  destin  : %s\n\n", destin2);
}
