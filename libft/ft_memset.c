/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:16:05 by ryomori           #+#    #+#             */
/*   Updated: 2024/04/28 10:30:21 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*a;

	a = (char *)s;
	i = 0;
	while (i < n)
	{
		a[i] = c;
		i++;
	}
	return (s);
}

// #include        <stdio.h>
// #include        <string.h>

// int main(void)
// {
//         char str[] = "0123456\0789";
// 		printf("%s\n",ft_memset (str, '*', 10));
//         memset(str, '*', 10);
//         printf("%s\n",str);
//         return 0;
// }