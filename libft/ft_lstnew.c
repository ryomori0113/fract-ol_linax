/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:45:36 by ryomori           #+#    #+#             */
/*   Updated: 2024/04/29 11:54:22 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*dest;

	dest = (t_list *)malloc(sizeof(t_list));
	if (dest == NULL)
		return (NULL);
	dest -> content = (void *)content;
	dest -> next = NULL;
	return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     // リストノードの作成
// 	t_list *node = ft_lstnew("Hello World");
//     // ノードの内容を出力
//     printf("Content: %s\n", (char *)node->content);
//     // ノードの next メンバは NULL なので、次のノードはありません
//     // メモリの解放
//     free(node);
//     return 0;
// }