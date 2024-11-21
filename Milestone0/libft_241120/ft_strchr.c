/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:58:53 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/18 15:03:42 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// returns a pointer to the first occurrence of the character c in the string s

char	*ft_strchr(const char *str, int c)
{
	char	*s;
	int		i;

	s = (char *)str;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return (&s[i]);
	return (0);
}
