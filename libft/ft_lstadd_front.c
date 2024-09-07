/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:25:43 by ryomori           #+#    #+#             */
/*   Updated: 2024/04/29 11:23:29 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new -> next = *lst;
		*lst = new;
	}
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

//     // Add elements to the front of the list
//     ft_lstadd_front(&list, ft_lstnew("three")); // List: 3
//     ft_lstadd_front(&list, ft_lstnew("two")); // List: 2 -> 3
//     ft_lstadd_front(&list, ft_lstnew("one")); // List: 1 -> 2 -> 3

//     printf("List after adding elements at the front: ");
// 	print_list(list);

// 	return (0);
// }