/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:10:26 by ryomori           #+#    #+#             */
/*   Updated: 2024/04/29 11:27:22 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_lstdelone(t_list *lst, void (*del)(void *))
// {
// 	if (lst && del)
// 	{
// 		(*del)(lst -> content);
// 		free(lst);
// 	}
// 	else
// 		return ;
// }

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst)
	{
		while (*lst)
		{
			tmp = (*lst)-> next;
			ft_lstdelone(*lst, del);
			(*lst) = tmp;
		}
		*lst = NULL;
	}
}

// static void	del(void *content)
// {
// 	free(content);
// }
// #include <string.h>
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
// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	t_list	*lst1;

// 	if (!new)
// 		return ;
// 	if (!*lst)
// 	{
// 		*lst = new;
// 		return ;
// 	}
// 	lst1 = ft_lstlast(*lst);
// 	new -> next = NULL;
// 	lst1 -> next = new;
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
// int main()
// {
//     t_list *list = ft_lstnew(strdup("One"));
//     ft_lstadd_back(&list, ft_lstnew(strdup("Two")));
//     ft_lstadd_back(&list, ft_lstnew(strdup("Three")));
//     ft_lstclear(&list, del);
//     printf("List cleared.\n");
//     return 0;
// }