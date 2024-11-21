/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main41_toupper_strncmp.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:44:48 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/07 11:52:12 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c strncmp.c

#include "libft.h"

int main(void)
{
/* 
//test ft_toupper.c
	printf("\ntest ft_toupper.c ....................\n");
	printf ("toupper : %c\n",ft_toupper('T'));
	printf ("toupper : %c\n",ft_toupper('e'));
    printf ("toupper : %c\n",ft_toupper('1'));
    printf ("toupper : %c\n",ft_toupper('~'));
	printf ("toupper : %c\n",ft_toupper(0));

//test ft_tolower.c
	printf("\ntest fc_tolower.c ....................\n");
	printf (" tolower : %c\n",ft_tolower('T'));
	printf (" tolower : %c\n",ft_tolower('e'));
    printf (" tolower : %c\n",ft_tolower('1'));
    printf (" tolower : %c\n",ft_tolower('~'));
	printf (" tolower : %c\n",ft_tolower(0));
*/
//test ft_strchr.c
	printf("\ntest ft_strchr.c ....................\n");
    char    string_strchr[] = "Learning to fly";
    printf("  string : %s\n", string_strchr);
    printf("  string : %p\n", string_strchr);
    printf("ft_strchr : %p\n", ft_strchr(string_strchr, 'n'));
    printf("ft_strchr : %p\n", ft_strchr(string_strchr, 'P'));
    printf("ft_strchr : %p\n", ft_strchr(string_strchr, '\0'));

//test ft_strrchr.c
	printf("\ntest ft_strrchr.c ....................\n");
    char    string_strrchr[] = "Learning to fly";
    printf("   string : %s\n", string_strrchr);
    printf("   string : %p\n", string_strrchr);
    printf("ft_strrchr : %p\n", ft_strrchr(string_strrchr, 'n'));
    printf("ft_strrchr : %p\n", ft_strchr(string_strrchr, 'P'));
    printf("ft_strrchr : %p\n", ft_strrchr(string_strrchr, '\0'));
/*
//test ft_strncmp.c
	printf("\ntest ft_strncmp.c ....................\n");

	char	string1[] = "abcdefg";
	char	string2[] = "abc\375xx";
	int	num = 5;
	printf ("string1 : %s\n", string1);
	printf ("string2 : %s\n", string2);
	printf ("num     : %d\n\n", num);
	printf ("ft_strncmp : %d\n", ft_strncmp(string1, string2, num));
	printf (" strncmp   : %d\n\n", strncmp(string1, string2, num));
*/
}
