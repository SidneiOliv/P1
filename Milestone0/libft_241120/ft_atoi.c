/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:40:03 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/18 16:29:03 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Converts the initial portion of the string pointed to by nptr to int

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	fsignal;
	int	number;

	i = 0;
	fsignal = 1;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			fsignal *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number *= 10;
		number += (str[i] - 48);
		i++;
	}
	return (fsignal * number);
}
