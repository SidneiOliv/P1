/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:53:36 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/04 16:49:08 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
