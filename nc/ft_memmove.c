/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:50:13 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/04 17:02:39 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*desti;
	unsigned char	*source;

	desti = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (desti > source)
	{
		desti = desti + n - 1;
		source = source + n - 1;
		while (n > 0)
		{
			*desti-- = *source--;
			n--;
		}
	}
	else
		ft_memcpy(desti, source, n);
	return (dest);
}
