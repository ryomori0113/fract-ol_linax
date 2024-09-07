/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 10:56:32 by ryomori           #+#    #+#             */
/*   Updated: 2024/04/29 13:58:41 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static size_t	ft_strlen(const char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// static char	*ft_strchr(const char *s, int c)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] == c)
// 		{
// 			return ((char *)s + i);
// 		}
// 		i++;
// 	}
// 	return (0);
// }

// static char	*ft_strrchr(const char *s, int c)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	i--;
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] == c)
// 		{
// 			return ((char *)s + i);
// 		}
// 		i--;
// 	}
// 	return (0);
// }

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*t;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	if (set != NULL)
	{
		while (*s1 && ft_strchr(set, *s1))
			s1++;
	}
	i = ft_strlen(s1);
	if (set != NULL)
	{
		while (0 < i && ft_strrchr(set, s1[i - 1]))
			i--;
	}
	t = ft_substr(s1, 0, i);
	if (t == NULL)
		return (NULL);
	return (t);
}

// #include <stdio.h>

// int main() {
//     // 元の文字列と文字セットを定義する
//     char s1[] = "hello world";
//     char set[] = "world";
// 	char *trimmed_str = ft_strtrim(s1, set);
// 	printf("%s\n", trimmed_str);
//     free(trimmed_str);
//     return 0;
// }
// /* 1 */ ASSERT_EQ_STR(ft_strtrim("hello world", "world"), "hello ");
// 	/* 2 */ ASSERT_EQ_STR(ft_strtrim("hello world", "hello"), " world");
// 	/* 3 */ ASSERT_EQ_STR(ft_strtrim("hello world", ""), "hello world");
// 	/* 4 */ ASSERT_EQ_STR(ft_strtrim("", ""), "");