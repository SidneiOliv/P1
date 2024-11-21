/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:40:52 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/20 11:47:50 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countd(int n)
{
	int				dig;
	unsigned int	m;

	dig = 0;
	if (n < 0)
	{
		dig++;
		n *= -1;
	}
	m = n;
	while (m > 9)
	{
		m = m / 10;
		dig++;
	}
	dig++;
	return (dig);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				dig;
	unsigned int	m;

	dig = ft_countd(n);
	str = (char *)malloc((dig + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	m = n;
	str[dig] = '\0';
	dig--;
	while (m > 9)
	{
		str[dig] = (m % 10) + 48;
		m = m / 10;
		dig--;
	}
	str[dig] = m + 48;
	return (str);
}
