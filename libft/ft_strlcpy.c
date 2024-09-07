/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:25:38 by ryomori           #+#    #+#             */
/*   Updated: 2024/05/01 13:33:36 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (src[i] != '\0' && i < (n - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int main ()
// {
// 	char i [] = "abcdefghij";
// 	char j [] = "123";

// 	printf("%lu\n", strlcpy(i, j, 8));
// 	printf("%s\n%s\n", i, j);
// 	printf("%zu\n", ft_strlcpy(i, j, 8));
// 	printf("%s\n%s\n", i, j);
// 	return(0);
// }