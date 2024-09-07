/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:53:42 by ryomori           #+#    #+#             */
/*   Updated: 2024/05/01 11:52:35 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (0);
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
//     char test[20] = "libft-test-tokyo";
//     char *p;
//     p = ft_strchr(test,'\0');
//     printf("検索文字が見つかった場所から表示→%s\n",p);
// 	p = strchr(test,'\0');
//     printf("検索文字が見つかった場所から表示→%s\n",p);
//     return 0;
// }