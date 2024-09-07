/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:10:32 by ryomori           #+#    #+#             */
/*   Updated: 2024/04/28 12:20:48 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s1, int c, size_t n)
{
	size_t				i;
	unsigned const char	*a;
	void				*s2;

	a = (unsigned const char *)s1;
	s2 = (void *)s1;
	i = 0;
	while (i < n)
	{
		if (a[i] == (unsigned char)c)
		{
			return (s2);
		}
		i++;
		s2++;
	}
	return (0);
}

// #include        <stdio.h>
// #include        <string.h>

// int main(void)
// {
//         char str[] = "abcdef\0ghij";
// 		char str1[] = "abcdef\0ghij";     /* 途中に空文字のある文字列 */
//         char *p;
// 		char *p1;
//         p = ft_memchr(str, 'h' + 256, 2147483648);
//         printf("検索文字は文字列の%ld番目\n",p - str);
// 		p1 = memchr(str1, 'h' + 256, 2147483648);
//         printf("検索文字は文字列の%ld番目\n",p1 - str1);
//         return 0;
// }