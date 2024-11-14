/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main91_substr_striteri.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:44:48 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/12 20:42:37 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c
// ft_striteri.c ft_putendl_fd.c ft_putnbr_fd.c

#include "libft.h"
//void    f12(unsigned int i, char *c);

int	main(void)
{
/*
//test ft_substr.c
	printf("\ntest ft_substr.c ....................\n");
	const char    str[] = "Learning to Fly";
	int start = 5;
	int len = 6;
	char    *subs;

	subs = ft_substr(str, start, len);
	printf("str  : %s\n", str);
	printf("subs : %s\n", subs);
	printf("str  : %s\n", str);

// test ft_strjoin.c
	printf("\ntest ft_strjoin.c ....................\n");

	char	destin[] = "Learning ";
	char	source[] = "to fly";
	char    *join;
	
	printf ("destin    : %s\n", destin);
	printf ("source    : %s\n", source);
	
	printf ("ft_strjoin: %s\n", ft_strjoin(destin, source));

	join = ft_strjoin(destin, source);
	printf ("join: %s\n", join);
	printf ("destin    : %s\n", destin);

// test ft_strtrim.c
	printf("\ntest ft_strtrim.c ....................\n");
	printf("Porto rt : %s\n", ft_strtrim("oooPorto", "oP"));
	char	string[] = "issiisBrasileirasiis";
//	char	string[] = "lorem ipsum dolor sit amet";
	char	trim[] = "is";
	printf("\ntest ft_strtrim.c ....................\n");
	printf("string : %s\n", string);
	printf("trim   : %s\n", trim);
	printf(" return : %s\n", ft_strtrim(string, trim));

// test ft_split.c
	printf("\ntest ft_split.c ....................\n");
	char	string[] = "     Sid  de  Oliv    ";
	char    **string1 = NULL;
	string1 = ft_split(string, ' ');
	printf("main/array[0]  : %s\n", string1[0]);
	printf("main/array[1]  : %s\n", string1[1]);
	printf("main/array[2]  : %s\n", string1[2]);
	printf("main/array[3]  : %s\n", string1[3]);
//    printf("main/array[4]  : %s\n", string1[4]);
//    printf("main/array[5]  : %s\n", string1[5]);

	printf("test : %s\n", ft_substr("     Sid de Oliv", 5, 3));

// test ft_itoa.c
	printf("\ntest ft_itoa.c ....................\n");
	printf("str : %s\n", ft_itoa(-2147483648));

// test ft_strmapi.c
	printf("\ntest ft_strmapi.c ....................\n");
	char *new;
	char *str = "porto";
	printf("new : %s\n%s", new = ft_strmapi(str, f1), str);
	}
	char    f1(unsigned int i, char c)
	{
		i = 32;
		return (ft_toupper(c));
	}

// test ft_striteri.c
	printf("\ntest ft_striteri.c ....................\n");
	char str[] = "Porto";
	printf("str : %s\n", str);
	ft_striteri(str, f12);
	printf("   str : %s\n", str);
	}
	void    f12(unsigned int i, char *c)
	{
		i = 32;
		// *c = *c - 32;
		//return (c);
		ft_toupper((int)&c);
	}
	*/
// test ft_putchar_fd.c
	printf("\ntest ft_putchar_fd.c ....................\n");
	ft_putchar_fd('S', 1);
	printf("\n");	
	
// test ft_putstr_fd.c
	printf("\ntest ft_putstr_fd.c ....................\n");
	char str1[] = "Porto";
	ft_putstr_fd(str1, 1);
//	printf("\n");

// test ft_putendl_fd.c
	printf("\ntest ft_putendl_fd.c ....................\n");
	char str2[] = "Porto";
	ft_putendl_fd(str2, 1);
	printf("newline");
//	printf("\n");

// test ft_putnbr_fd.c
	printf("\ntest ft_putnbr_fd.c ....................\n");
	ft_putnbr_fd(-2147483648, 1);
//	printf("\n");

}

