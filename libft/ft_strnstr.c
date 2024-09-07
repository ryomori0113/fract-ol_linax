/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:38:21 by ryomori           #+#    #+#             */
/*   Updated: 2024/04/29 11:03:52 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }

char	*ft_strnstr(const char *str, const char *lang, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!str && n == 0)
		return (NULL);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == lang[j] && str[i + j] != '\0' && i + j < n)
		{
			j++;
		}
		if (j == ft_strlen(lang))
		{
			return ((char *)str + i);
		}
		i++;
	}
	if ((str[0] == '\0') && (lang[0] == '\0'))
		return ((char *)str + i);
	return (0);
}

// #include <string.h>
// #include <stdio.h>
// int	main()
// {
// 	char str[] = "42 1337 Network 2021 piscine Benguerir Khouribga";
// 	char find[] = "piscine";
// 	char str1[] = "";
// 	char find1[] = "";
// 	printf("%s\n", ft_strnstr(str, find, 30));
// 	printf("%s\n", strnstr(str, find, 30));
// 	printf("%s\n", ft_strnstr(str1, find1, 0));
// 	printf("%s\n", strnstr(str1, find1, 0));
// 	return(0);
// }