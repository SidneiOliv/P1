/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:22:45 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/05 18:04:11 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		len;
	char	*ptr;

	len = ft_strlen(str) + 1;
	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
		return (0);
	ft_strlcpy(ptr, str, len);
	return (ptr);
}
