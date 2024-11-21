/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:05:08 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/18 16:49:45 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates memory for an array of nmemb elements of size bytes each 
// and returns a pointer to the allocated memory. The memory is set to zero

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
