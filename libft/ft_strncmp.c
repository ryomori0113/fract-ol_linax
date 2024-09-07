/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:38:41 by ryomori           #+#    #+#             */
/*   Updated: 2024/05/01 09:52:23 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s2 != '\0' && 0 < n)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	char test1[10] = CHAR_MIN;
// 	char test2[10] = "Libft";
// 	//test1とtest2の文字列を先頭から5文字比較
// 	if(ft_strncmp(test1,test2,5)==0){
// 		puts("文字列は一致しています。");
// 	}else{
// 		puts("文字列は一致していません。");
// 	}
// 	//test1とtest2の文字列を先頭から３文字比較
// 	if(strncmp(test1,test2,3)==0){
// 		puts("文字列は一致しています。");
// 	}else{
// 		puts("文字列は一致していません。");
// 	}
// 	return 0;
// }