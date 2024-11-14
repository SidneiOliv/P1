/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:53:07 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/08 15:05:28 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	id;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (size + len_src);
	id = len_dst;
	ft_strlcpy(&dst[id], src, size - len_dst);
	return (len_dst + len_src);
}
