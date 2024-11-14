/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:55:22 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/07 12:07:50 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;
	int		i;

	s = (char *)str;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i--;
	}
	return (0);
}
