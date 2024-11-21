/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:47:39 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/20 12:22:20 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = (t_list *)malloc(sizeof(t_list));
	if (!element)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}

/*
t_list *ft_lstnew(void *content)
{
	// declaring the new list element
	t_list *elem;
	
	// allocating the memory for the new element
	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);

	// setting the content of the new element
	// to the 'content' parameter
	// and setting the 'next' to NULL
	elem->content = content;
	elem->next = NULL;

	// finally, we return the created element
	return (elem);
}*/
/* libft.h
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list		*ft_lstnew(void *content);
*/
