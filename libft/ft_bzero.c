/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:28:28 by ryomori           #+#    #+#             */
/*   Updated: 2024/04/29 12:14:28 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, int n)
{
	int		i;
	char	*a;

	a = (char *)s;
	i = 0;
	while (i < n)
	{
		*a = '\0';
		i++;
		a++;
	}
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//         char str[] = "0123456789";
// 		char str1[] = "0123456789";
// 		bzero (str+4, 5);
// 		ft_bzero (str1+4, 5);
//         printf("%s\n",str);
// 		printf("%s\n",str1);
//         return 0;
// }