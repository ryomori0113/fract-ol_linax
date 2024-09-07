/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:38:24 by ryomori           #+#    #+#             */
/*   Updated: 2024/04/29 11:30:50 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		(*del)(lst -> content);
		free(lst);
	}
	else
		return ;
}

// static void	del(void *content)
// {
// 	free(content);
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
// #include <string.h>
// int main()
// {
// 	char *content = strdup("Dynamic string content");
//     if (!content) {
//         perror("Failed to allocate content");
//         exit(EXIT_FAILURE);
//     }

//     // Create a new list node
//     t_list *node = ft_lstnew(content);
//     if (!node)
// 	{
//         perror("Failed to create list node");
//         free(content); // Clean up content if list node creation fails
//         exit(EXIT_FAILURE);
//     }

//     // Delete the node
//     ft_lstdelone(node, del);

//     printf("Node and its content have been deleted\n");

// 	return (0);
// }