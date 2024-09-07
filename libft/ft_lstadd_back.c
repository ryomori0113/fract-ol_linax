/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:03:22 by ryomori           #+#    #+#             */
/*   Updated: 2024/04/29 16:55:17 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (*lst)
		ft_lstlast(*lst)-> next = new;
	else
		*lst = new;
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
// t_list	*ft_lstlast(t_list *lst)
// {
// 	while (lst != NULL)
// 	{
// 		if (!lst -> next)
// 			return (lst);
// 		lst = lst -> next;
// 	}
// 	return (lst);
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
//     ft_lstadd_back(&list, ft_lstnew("three")); // List: 3
//     ft_lstadd_back(&list, ft_lstnew("two")); // List: 2 -> 3
//     ft_lstadd_back(&list, ft_lstnew("one")); // List: 1 -> 2 -> 3

//     printf("List after adding elements at the back: ");
// 	print_list(list);

// 	return (0);
// }