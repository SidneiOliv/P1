/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main61_memchr_strdup.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:44:48 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/12 21:03:40 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c

#include "libft.h"
//#include <string.h>
//#include <stdlib.h>

int	main(void)
{
/*
// test ft_memchr.c .................................................
	printf("\ntest ft_memchr.c ....................\n");
	const char	*str5;
	char	string5[] = "Learning to Fly";
	char	to_find1 = '7';
	char	to_find2 = 'n';
	char	to_find3 = '\0';

	printf ("\ntest ft_memchr.c\n");
	
	printf(" string5 : %s\n", string5);

	printf("to_find1  : %c\n", to_find1);
	str5 = ft_memchr(string5, to_find1, 10);
	printf("ft_memchr : %s\n", str5);
	str5 = memchr(string5, to_find1, 10);
	printf("memchr    : %s\n", str5);
		
	printf(" to_find2  : %c\n", to_find2);
	str5 = ft_memchr(string5, to_find2, 10);
	printf(" ft_memchr : %s\n", str5);
	str5 = memchr(string5, to_find2, 10);
	printf(" memchr    : %s\n", str5);

	printf("to_find3  : %c\n", to_find3);
	str5 = ft_memchr(string5, to_find3, 10);
	printf("ft_memchr : %s\n", str5);
	str5 = memchr(string5, to_find3, 10);
	printf("memchr    : %s\n", str5);

// test ft_memcmp.c ...................................................
	printf("\ntest ft_memcmp.c ....................\n");
	char	string7[] = "abcdefghi";
	char	string8[] = "abcdefghi";
	int	num = 10;

	printf ("\ntest ft_memcmp.c\n");

	printf ("\nstring7 : %s\n", string7);
	printf ("string8 : %s\n", string8);
	printf ("num     : %d\n\n", num);
	
	printf ("ft_memcmp : %d\n", ft_memcmp(string7, string8, num));
	printf (" memcmp   : %d\n\n", memcmp(string7, string8, num));

	printf ("ft_memcmp : %d\n",ft_memcmp("abc", "abc", 7));
*/
// test ft_strnstr ......................................................
	printf("\ntest ft_strnstr.c ....................\n");
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	const char *ptr;

	ptr = ft_strnstr(largestring, smallstring, 4);
	printf("strnstr : %s\n", ptr);

	char	string21[] = "Learning to Fly";
	char	to_find21[] = "";
	char	to_find22[] = "ab";
	char	to_find23[] = "nin";

	printf("\n string21 : %s\n", string21);

	printf("to_find21   : %s\n", to_find21);
	printf("ft_strnstr : %s\n\n", ft_strnstr(string21, to_find21, 10));
	
	printf(" to_find22   : %s\n", to_find22);
	printf(" ft_strnstr : %s\n\n", ft_strnstr(string21, to_find22, 10));

	printf("to_find23   : %s\n", to_find23);
	printf("ft_strnstr : %s\n\n", ft_strnstr(string21, to_find23, -1));

	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
/*
//test ft_atoi.c ........................................................
	printf("\ntest ft_atoi.c ....................\n");
	char	string10[] = " ---+--+1234ab567";
	char	string11[] = "    \t -1234ab567";
	char	string12[] = "001abc/$";
	char	string13[] = "+++1324%";

	printf ("\nstring : %s\n", string10);
	printf ("ft_atoi : %d\n", ft_atoi(string10));
	printf (" atoi   : %d\n", atoi(string10));

	printf ("\nstring1 : %s\n", string11);
	printf ("ft_atoi : %d\n", ft_atoi(string11));
	printf (" atoi   : %d\n", atoi(string11));

	printf ("\nstring2 : %s\n", string12);
	printf ("ft_atoi : %d\n", ft_atoi(string12));
	printf (" atoi   : %d\n", atoi(string12));

	printf ("\nstring3 : %s\n", string13);
	printf ("ft_atoi : %d\n", ft_atoi(string13));
	printf (" atoi   : %d\n", atoi(string13));

	printf("\nft_atoi : %i\n", ft_atoi("2147483648"));
	printf(" atoi   : %i\n", atoi("2147483648"));

// test ft_calloc.c .................................................
	printf("\ntest ft_calloc.c ....................\n");
	int *pt;
    int num;
    int size;

    num = 4;
    size = 4;
    pt = ft_calloc(num, size);

    int i;
    i = 0;
    while (i < num)
    {
        printf("pt[%d] : %d\n", i, pt[i]);
        i++;
    }

// test ft_strdup.c .................................................
	printf("\ntest ft_strdup.c ....................\n");
    char    str1[] = "Porto";
    char    *ptr;
    
    ptr = ft_strdup(str1);
    
    int i2;
    i2 = 0;
    while (i2 < 5)
    {
        printf("ptr[%d] : %c\n", i2, ptr[i2]);
        i2++;
    }
*/
}
