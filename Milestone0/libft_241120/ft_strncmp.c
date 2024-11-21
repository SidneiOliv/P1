/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:22:18 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/18 15:17:28 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Compares only the first (at most) n bytes of s1 and s2.
// Returns an integer indicating the result of the comparison, as follows:
//  0, if the s1 and s2 are equal;
//  a negative value if s1 is less than s2;
//  a positive value if s1 is greater than s2.

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
