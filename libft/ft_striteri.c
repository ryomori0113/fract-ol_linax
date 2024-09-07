/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:31:31 by ryomori           #+#    #+#             */
/*   Updated: 2024/05/01 10:50:42 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// static void	f(unsigned int i, char *str)
// {
// 	int	a;

// 	a = 0;
// 	if (i % 2 == 0)
// 	{
// 		while (str[a])
// 		{
// 			if (str[a] >= 'a' && str[a] <= 'z')
// 				str[a] -= 32;
// 			a++;
// 		}
// 	}
// 	else
// 	{
// 		while (str[a])
// 		{
// 			if (str[a] >= 'A' && str[a] <= 'Z')
// 				str[a] += 32;
// 			a++;
// 		}
// 	}
// }

// #include <stdio.h>

// int main ()
// {
// 	char str[] = "asdfghjk";
// 	ft_striteri(str, &f);
// 	printf("%s\n", str);
// 	return (0);
// }
// void f(unsigned int i, char *str);

// int main() {
//     char str[] = "Hello World!";
//     // ft_striteri 関数を呼び出して文字列を変更する
//     ft_striteri(str, &f);
//     // 変更後の文字列を出力する
//     printf("Modified string: %s\n", str);

//     return 0;
// }