/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:53:36 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/20 12:23:31 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copies n bytes from memory area src to memory area dest.
// The memory areas must not overlap. Use memmove(3)
// if the memory areas do overlap

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*desti;
	unsigned char	*source;
	size_t			i;

	desti = (unsigned char *)dest;
	source = (unsigned char *)src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		*desti++ = *source++;
		i++;
	}
	return (dest);
}
