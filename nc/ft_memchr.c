/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:06:28 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/07 11:47:38 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	chr;
	size_t			i;

	s = (unsigned char *)str;
	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s[i] == chr)
			return (&s[i]);
		i++;
	}
	return (0);
}
