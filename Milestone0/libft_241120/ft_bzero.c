/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:42:20 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/18 13:50:02 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Erases the data in the n bytes of the memory
// starting at the location pointed to by s,
// by writing zeros (bytes containing '\0') to that area

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
