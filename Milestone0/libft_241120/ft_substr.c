/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:09:30 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/18 17:14:00 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a substring from the string ’s’.
// The substring begins at index ’start’ and is of maximum size ’len’.

//#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subs;
	unsigned int	i1;
	unsigned int	i2;

	i1 = 0;
	i2 = start;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	subs = malloc((len + 1) * sizeof(char));
	if (subs == NULL)
		return (0);
	while (s[i2] && i1 < len)
	{
		subs[i1] = s[i2];
		i1++;
		i2++;
	}
	subs[i1] = '\0';
	return (subs);
}
