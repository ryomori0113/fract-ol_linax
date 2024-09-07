/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:31:19 by ryomori           #+#    #+#             */
/*   Updated: 2024/04/29 11:45:03 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*cpy;

	if (!lst || !del || !f)
		return (NULL);
	newlst = ft_lstnew ((*f)(lst -> content));
	if (!newlst)
		return (NULL);
	cpy = newlst;
	lst = lst -> next;
	while (lst)
	{
		newlst -> next = ft_lstnew((*f)(lst -> content));
		if (!newlst -> next)
		{
			ft_lstclear(&cpy, del);
			return (NULL);
		}
		lst = lst -> next;
		newlst = newlst -> next;
	}
	newlst -> next = NULL;
	return (cpy);
}

// #include <string.h>
// // Function to transform content
// int	ft_toupper(int c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		c -= 32;
// 	return (c);
// }
// static void	*uppercase(void *content)
// {
// 	int	i;

// 	i = 0;
// 	char *str = (char *)content;
// 	char *new_str = strdup(str); // Assuming strdup is available
// 	while (new_str && new_str[i])
// 	{
// 		new_str[i] = ft_toupper(new_str[i]);
// 		i++;
// 	}
// 	return (new_str);
// }

// static void	del(void *content)
// {
// 	free(content);
// }

// static void	print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
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

// void	ft_lstiter(t_list *lst, void (*f)(void *))
// {
// 	if (!lst || !f)
// 		return ;
// 	while (lst)
// 	{
// 		(*f)(lst -> content);
// 		lst = lst -> next;
// 	}
// }

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

// void	ft_lstclear(t_list **lst, void (*del)(void*))
// {
// 	t_list	*tmp;

// 	if (lst)
// 	{
// 		while (*lst)
// 		{
// 			tmp = (*lst)-> next;
// 			ft_lstdelone(*lst, del);
// 			(*lst) = tmp;
// 		}
// 		*lst = NULL;
// 	}
// }

// int main()
// {
//     t_list *list = ft_lstnew(strdup("one"));
//     ft_lstadd_back(&list, ft_lstnew(strdup("two")));
//     ft_lstadd_back(&list, ft_lstnew(strdup("three")));

//     t_list *mapped_list = ft_lstmap(list, uppercase, del);

//     printf("Original list:\n");
//     ft_lstiter(list, print_content);
//     printf("Mapped list:\n");
//     ft_lstiter(mapped_list, print_content);

//     ft_lstclear(&list, del); // Clean up original list
//     ft_lstclear(&mapped_list, del); // Clean up mapped list
//     return 0;
// }