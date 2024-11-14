/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main11_isaplha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:44:48 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/10/31 19:18:23 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c 

#include "libft.h"

int	main(void)
{

// test ft_isalpha.c
	printf("\ntest ft_strlcpy.c ....................\n");
	int	a;
	a = '0';
	printf ("%c, =  %d\n", a, ft_isprint(a));
	a = 'A';
	printf ("%c, =  %d\n", a, ft_isprint(a));
	a = 115;	
	printf ("%c, =  %d\n", a, ft_isprint(a));
	a = 200;
	printf ("%c, =  %d\n", a, ft_isprint(a));
	printf ("\n");
/*
// test ft_isdigit.c
	printf("\ntest ft_isdigit.c ....................\n");

// test ft_isalnum.c
	printf("\ntest ft_isalnum.c ....................\n");

// test ft_isascii.c
	printf("\ntest ft_isascii.c ....................\n");

// test ft_isprint.c
	printf("\ntest ft_isprint.c ....................\n");
*/
// test ft_strlen.c
	printf("\ntest ft_strlen.c ....................\n");
	char	str[] = " Learning to fly ";
	printf ("str   : %s\n", str);
	printf("ft_strlen : %d\n", ft_strlen(str));
	int	length = strlen(str);	
	printf(" strlen   : %d\n\n", length);
	printf ("\n");

}
