/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:40:35 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/13 17:40:35 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*subs;
	int		i1;
	int		i2;

	i1 = 0;
	i2 = 0;
	subs = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (subs == NULL)
		return (0);
	while (s1[i1])
	{
		subs[i1] = s1[i1];
		i1++;
	}
	i2 = 0;
	while (s2[i2])
	{
		subs[i1] = s2[i2];
		i1++;
		i2++;
	}
	subs[i1] = '\0';
	return (subs);
}
