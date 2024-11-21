/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:06:30 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/19 14:44:56 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocate (with malloc(3)) and returns an array of strings obtained by
// splitting s with the character c, used as delimiter

#include "libft.h"

int	ft_countw(const char *s, char c)
{
	int	countw;

	countw = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
			countw++;
		while (*s != c && *s)
			s++;
	}
	return (countw);
}

void	*ft_free(char **array, int i)
{
	int	j;

	j = 0;
	while (j <= i)
	{
		free(array[j]);
		j++;
	}
	free(array);
	return (NULL);
}

char	*ft_fill(const char *s, char c)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	str = (char *)malloc((i + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != c && s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(const char *s, char c)
{
	char		**array;
	int			i;

	i = 0;
	array = (char **)malloc((ft_countw(s, c) + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			array[i] = ft_fill(s, c);
			if (array[i] == NULL)
				return (ft_free(array, i));
			i++;
			while (*s != c && *s)
				s++;
		}
	}
	array[i] = NULL;
	return (array);
}
