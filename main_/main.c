/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:49:08 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/20 11:42:08 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
//#include <bsd/string.h>
//cc -lbsd main.c ft_strlcpy.c ft_strlcat.c ft_strlen.c

// test ft_strmapi.c
char	ft_1(unsigned int n, char c)
{
	(void)n;
	return (ft_toupper(c));
}
// test ft_striteri.c
void	ft_2(unsigned int n, char *c)
{
	(void)n;
	*c = *c - 32;
}

int main(void)
{
/*
	printf("\ntest ft_isalpha.c : %i\n", ft_isalpha('a'));
	printf("test isalpha : %i\n", isalpha('a'));

	printf("\ntest ft_isdigit.c : %i\n", ft_isdigit('7'));
	printf("test isdigit : %i\n", isdigit('7'));

	printf("\ntest ft_isalnum.c : %i\n", ft_isalnum('\0'));
	printf("test isalnum : %i\n", isalnum('\0'));

	printf("\ntest ft_isascii.c : %i\n", ft_isascii(128));
	printf("test isascii : %i\n", isascii(128));

	printf("\ntest ft_isprint.c : %i\n", ft_isprint(50));
	printf("test isprint : %i\n", isprint(50));

	const char	*str1 = "Porto";
	printf("\ntest ft_strlen.c : %zu\n", ft_strlen(str1));
	printf("test strlen : %zu\n", strlen(str1));
*/
/*
	char	str2[] = "Porto";
	ft_memset(str2, 's', 3);
	printf("\ntest ft_memset.c : %s\n", str2);
	memset(str2, 'G', 3);
	printf("test memset : %s\n", str2);

	char	str3[] = "Porto";
	ft_bzero(str3, 5);
	printf("\ntest ft_bzero.c : %s\n", str3);
	char	str4[] = "Porto";
	bzero(str4, 5);
	printf("test bzero : %s\n", str4);

	char	str5[] = "123456";
	ft_memcpy(str5 + 2, str5, 3);
	printf("\ntest ft_memcpy.c : %s\n", str5);
	char	str6[] = "123456";
	memcpy(str6 + 2, str6, 3);
	printf("test memcpy : %s\n", str6);

	char	str7[] = "123456";
	ft_memmove(str7 + 2, str7, 3);
	printf("\ntest ft_memmove.c : %s\n", str7);
	char	str8[] = "123456";
	memmove(str8 + 2, str8, 3);
	printf("test memmove : %s\n", str8);
*/
/*	char	str9[] = "123456";
	printf("\nft ret : %zu\n", ft_strlcpy(str9 + 2, "abcde", 4));
	printf("ft_strlcpy.c : %s\n", str9);
	char	str10[] = "123456";
	printf(" ret : %zu\n", strlcpy(str10 + 2, "abcde", 4));
	printf(" strlcpy : %s\n", str10);

	char	str11[] = "123456";
	printf("\nft ret : %zu\n", ft_strlcat(str11, "abcde", 20));
	printf("ft_strlcat.c : %s\n", str11);
	char	str12[] = "123456";
	printf("ft ret : %zu\n", strlcat(str12, "abcde", 20));
	printf(" strlcat : %s\n", str12);
*/
/*	printf("\nft_toupper.c : %c\n", ft_toupper('a'));
	printf(" toupper : %c\n", toupper('a'));

	printf("\nft_tolower.c : %c\n", ft_tolower('A'));
	printf(" tolower : %c\n", tolower('A'));

	printf("\nft_strchr.c : %s\n", ft_strchr("abc1de1fg", '1'));
	printf(" strchr.c : %s\n", strchr("abc1de1fg", '1'));

	printf("\nft_strrchr.c : %s\n", ft_strrchr("abc1de1fg", '1'));
	printf(" strrchr.c : %s\n", strrchr("abc1de1fg", '1'));

	printf("\nft_strncmp.c : %i\n", ft_strncmp("aBcdefg", "abCdEfg", 6));
	printf(" strncmp : %i\n", strncmp("aBcdefg", "abCdEfg", 6));

	char	str13[] = "abc1de1fg";
	char	*str14;
	str14 = ft_memchr(str13, '1', 8);
	printf("\nft_memchr.c : %s\n", str14);
	str14 = memchr(str13, '1', 8);
	printf(" memchr : %s\n", str14);

	printf("\nft_memcmp.c : %i\n", ft_memcmp("abcdefg", "abcdEfg", 4));
	printf(" memcmp : %i\n", memcmp("abcdefg", "abcdEfg", 4));
*/
/*	char	str15[] = "abcdefabcdef";
	char	str16[] = "def";
	char	*str17;
	str17 = ft_strnstr(str15, str16, 7);
	printf("\nft_strnstr.c : %s\n", str17);
	str17 = strnstr(str15, str16, 7);
	printf(" strnstr : %s\n", str17);
*/
/*	printf("\nft_atoi.c : %i\n", ft_atoi("  -1234"));
	printf(" atoi : %i\n", atoi("  -1234"));

	int	*ptr;
	int	num = 4;
	ptr = ft_calloc(num, sizeof(int));
	int	i = 0;
	printf("\n");
	while (i < num)
	{
		printf("ft_calloc.c ptr[%i] : %i\n", i, ptr[i]);
		i++;
	}
	
	char	*newstr;
	newstr = ft_strdup("Learning to fly");
	printf("\nft_strdup : %s\n", newstr);
	newstr = strdup("Learning to fly");
	printf(" strdup : %s\n", newstr);

	printf("\nft_substr.c : %s\n", ft_substr("Learning to fly", 5, 5));

	printf("\nft_strjoin.c : %s\n", ft_strjoin("Learning ", "to fly"));

	printf("\nft_strtrim.c : %s\n", ft_strtrim("guugportuguesaugug", "gu"));

	char	**spt;
	int	j = 0;
	spt = ft_split("  Learning to fly  ", ' ');
	printf("\n");
	while (j < 4)
	{
		printf("ft_split.c : %s\n", spt[j]);
		j++;
	}
*/
	printf("\nft_itoa.c : %s\n", ft_itoa(-1234));

	char	smp[] = "porto";
	char	*strm;
	// 	ft_1 placed above in the init
	strm = ft_strmapi(smp, ft_1);
	printf("\nft_strmapi.c strm : %s\n", strm);
	printf("ft_strmapi.c smp : %s\n", smp);

	char	stri[] = "porto";
	printf("\nft_striteri.c stri : %s\n", stri);
	// 	ft_2 placed above in the init
	ft_striteri(stri, ft_2);
	printf("ft_striteri.c stri : %s\n", stri);

	//printf("\nft_putchar_fd.c : ");
	write(1, "\n", 1);
	ft_putchar_fd('S', 1);
	write(1, "\n", 1);

	char	pstr[] = "Porto";
	//printf("\nft_putstr_fd.c : ");
	ft_putstr_fd(pstr, 1);
	write(1, "\n", 1);

	char	pelstr[] = "Porto";
	//printf("\ft_putendl_fd.c : ");
	ft_putendl_fd(pelstr, 1);

	//printf("\ft_putnbr_fd.c : ");
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);

}