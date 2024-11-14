/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:47:40 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/13 17:27:40 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	i1;
	size_t	i2;

	i1 = 0;
	i2 = 0;
	if (lit[0] == '\0')
		return ((char *) big);
	while (big[i1] != '\0' && i1 < len)
	{
		while (big[i1 + i2] == lit[i2] && big[i1 + i2] && i1 + i2 < len)
		{
			i2++;
			if (lit[i2] == '\0')
				return ((char *)big + i1);
		}
		i1++;
		i2 = 0;
	}
	return (NULL);
}
