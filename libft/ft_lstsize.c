/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:56:31 by ryomori           #+#    #+#             */
/*   Updated: 2024/04/29 11:54:30 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

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

// void	ft_lstadd_front(t_list **lst, t_list *new)
// {
// 	if (lst && new)
// 	{
// 		new -> next = *lst;
// 		*lst = new;
// 	}
// }
// int main() {
//     // テスト用のリストを作成します
//     t_list *list = NULL; // リストの先頭へのポインタ
//     // テスト用のノードをいくつか追加します
//     ft_lstadd_front(&list, ft_lstnew("Node 1"));
//     ft_lstadd_front(&list, ft_lstnew("Node 2"));
//     ft_lstadd_front(&list, ft_lstnew("Node 3"));
//     // リスト内のノードの数を数えます
//     int size1 = ft_lstsize(list);
//     // 結果を出力します
//     printf("List size (first implementation): %d\n", size1);
//     // リスト内のノードの数を数えます
//     int size2 = ft_lstsize(list);
//     // 結果を出力します
//     printf("List size (second implementation): %d\n", size2);
//     return 0;
// }