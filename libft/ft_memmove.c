/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:16:02 by ryomori           #+#    #+#             */
/*   Updated: 2024/04/29 12:11:15 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*s;

	dst = dest;
	s = src;
	if (!dest && !src)
		return (NULL);
	if (dst < s)
	{
		while (n--)
		{
			*dst++ = *s++;
		}
	}
	else if (dst > s)
	{
		dst += (n - 1);
		s += (n - 1);
		while (n--)
			*dst-- = *s--;
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
//     //bufの先頭から3バイト進めた位置にbufの先頭から3バイトコピー
// 	ft_memmove(buf + 1, buf, 5);
//     printf("%s\n", buf);
//     memmove(buf1 + 1, buf1, 5);
//     printf("%s\n", buf1);
//     return 0;
// }
