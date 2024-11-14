/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:05:08 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/05 21:10:09 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	unsigned char	*ptr;

	ptr = malloc(num * size);
	if (ptr == NULL)
		return (0);
	ft_bzero(ptr, num * size);
	return (ptr);
}
