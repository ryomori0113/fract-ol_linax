/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:30:19 by ryomori           #+#    #+#             */
/*   Updated: 2024/04/29 14:06:40 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char					*t;
	size_t					i;
	unsigned int			k;

	t = NULL;
	if (s == NULL)
		return (t);
	k = ft_strlen(s);
	if (k < start)
		len = 0 ;
	if ((k - start) < len)
		len = k - start;
	t = (char *)malloc(sizeof(char) *(len + 1));
	if (t)
	{
		i = 0;
		while (len-- && s[start + i])
		{
			t[i] = s[start + i];
			i++;
		}
		t[i] = '\0';
	}
	return (t);
}

// #include <stdio.h>
// int main()
// {
//     char *s = "libft-test-tokyo";
//     char* dest = ft_substr(s, 20, 100);
// 	printf("%s\n", dest);
// 	dest = ft_substr(s, 20, 5);
// 	printf("%s\n", dest);
// 	dest = ft_substr(s, 5, 5);
// 	printf("%s\n", dest);
// 	dest = ft_substr(s, 5, 5);
//     printf("%s\n", dest);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// //次の関数は、`src`に存在する文字を抽出します
// //`m`と`n`の間( `n`を除く)
// char* substr(const char *src, int m, int n)
// {
//     //宛先文字列の長さを取得します
//     int len = n - m;
//     //宛先に(len + 1)文字を割り当てます(余分なヌル文字の場合は+1)
//     char *dest = (char*)malloc(sizeof(char) * (len + 1));
//     //ソース文字列からm番目とn番目のインデックスの間の文字を抽出します
//     //そしてそれらを宛先文字列にコピーします
//     for (int i = m; i < n && (*(src + i) != '\0'); i++)
//     {
//         *dest = *(src + i);
//         dest++;
//     }
//     //null-宛先文字列を終了します
//     *dest = '\0';
//     //宛先文字列を返します
//     return dest - len;
// }
//Cで`substr()`関数を実装します