/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main81_lstnew_lstmap.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:44:48 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/11/14 17:41:32 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c 

#include "libft.h"

int	main(void)
{

// test ft_lstnew.c
	printf("\ntest ft_lstnew.c ....................\n");
	char	*c;
	c = "s";
	t_list	*element;
	//element = NULL;
	element = /*(t_list *)*/malloc(sizeof(t_list));
	//if (!element)
	//	return (NULL);
	element->content = c;
	element->next = NULL;
//	char	*c2 = " ";
	//int *a = NULL;
	//*a = 42;
//	c2 = &element->content;
//	printf("%s	\n", c2);

}
