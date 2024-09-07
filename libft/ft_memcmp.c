/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:05:35 by ryomori           #+#    #+#             */
/*   Updated: 2024/04/29 11:08:05 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*st1;
	const unsigned char	*st2;

	st1 = (const unsigned char *)s1;
	st2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (st1[i] != st2[i])
			return (st1[i] - st2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(void)
// {
// 	char buf[] = "\0ABCD5EFGH";
// 	char buf2[] = "ABC123456";
// 	printf("%d\n",ft_memcmp(buf,buf2,1));
// 	printf("%d\n",memcmp(buf,buf2,1));
// 	// if(memcmp(buf,buf2,1)==0){
// 	// 	puts("先頭から10バイトは一致しています。");
// 	// }else{
// 	// 	puts("一致していません。");
// 	// }
// 	return 0;
// }