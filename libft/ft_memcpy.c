/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:00:46 by ryomori           #+#    #+#             */
/*   Updated: 2024/04/29 17:16:16 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*a;
	const unsigned char	*b;

	if (!dest && !src)
		return (0);
	a = (unsigned char *)dest;
	b = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(void)
// {
//     char buf[] = "ABCDEFG";
// 	char buf1[] = "ABCDEFG";
//     char bufa[] = "1234";
// 	char bufb[] = "1234";
//     //3バイトだけコピー
//     ft_memcpy(buf + 3,bufa,4);
// 	memcpy(buf1 + 3,bufb,4);
//     //表示
//     printf("コピー後のbuf文字列→%s\n",buf);
// 	return 0;
// }
