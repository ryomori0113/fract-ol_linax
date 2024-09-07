/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 10:40:44 by ryomori           #+#    #+#             */
/*   Updated: 2024/04/29 11:39:21 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL)
	{
		if (!lst -> next)
			return (lst);
		lst = lst -> next;
	}
	return (lst);
}

// static void	print_list(t_list *list)
// {
// 	while (list != NULL)
// 	{
// 		printf("%s -> ", (char *)list->content);
// 		list = list->next;
// 	}
// 	printf("NULL\n");
// }

// void	ft_lstadd_front(t_list **lst, t_list *new)
// {
// 	if (lst && new)
// 	{
// 		new -> next = *lst;
// 		*lst = new;
// 	}
// }

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*dest;

// 	dest = (t_list *)malloc(sizeof(t_list));
// 	if (dest == NULL)
// 		return (NULL);
// 	dest -> content = (void *)content;
// 	dest -> next = NULL;
// 	return (dest);
// }

// int main()
// {
// 	t_list *list = NULL; // Start with an empty list
// 	t_list *last;

//     // Add elements to the front of the list
//     ft_lstadd_front(&list, ft_lstnew("three")); // List: 3
//     ft_lstadd_front(&list, ft_lstnew("two")); // List: 2 -> 3
//     ft_lstadd_front(&list, ft_lstnew("one")); // List: 1 -> 2 -> 3

// 	printf("Last one");
// 	print_list(list);

//     // Using ft_lstlast to get the last element
//     last = ft_lstlast(list);
//     if (last != NULL)
//         printf("Last element: %s\n", (char *)last->content);
//     else
//         printf("The list is empty.\n");
// 	return (0);
// }