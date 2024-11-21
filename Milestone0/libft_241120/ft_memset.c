/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:35:14 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/18 13:11:05 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Fills the first n bytes of the memory area pointed to by s
//  with the constant byte c

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
