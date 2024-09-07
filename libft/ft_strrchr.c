/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:25:07 by ryomori           #+#    #+#             */
/*   Updated: 2024/04/29 14:49:04 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = ft_strlen(s) + 1;
	s += ft_strlen(s);
	while (i > 0)
	{
		if (*s == (char)c || *s == c - 256 || *s == c + 256)
			return ((char *)s);
		i--;
		s--;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
//     char test[20] = "libft-test-tokyo";
//     char *p;
//     p = ft_strrchr(test,'i' - 256);
//     printf("検索文字が見つかった場所から表示→%s\n",p);

// 	p = strrchr(test,'i' - 256);
//     printf("検索文字が見つかった場所から表示→%s\n",p);

//     return 0;
// }