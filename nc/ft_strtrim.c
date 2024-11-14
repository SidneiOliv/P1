/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:50:45 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/13 17:39:38 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//removes characters from the beginning to the end of the s1, informed in set.

#include "libft.h"

int	ft_findsetend(char const *s1, char const *set)
{
	int		i1;
	int		i2;

	i1 = ft_strlen(s1) - 1;
	i2 = 0;
	while (set[i2] != '\0')
	{
		if (s1[i1] != set[i2])
			i2++;
		else
		{
			i1--;
			i2 = 0;
		}
	}
	return (i1);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i1;
	int		i2;
	int		m1;

	i1 = 0;
	i2 = 0;
	while (set[i2] != '\0' && s1[i1] != '\0')
	{
		if (s1[i1] != set[i2])
			i2++;
		else
		{
			i1++;
			i2 = 0;
		}
	}
	m1 = i1;
	i1 = ft_findsetend(s1, set);
	return (ft_substr(s1, m1, i1 - m1 + 1));
}
