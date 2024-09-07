/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:36:21 by ryomori           #+#    #+#             */
/*   Updated: 2024/04/29 12:18:34 by ryomori          ###   ########.fr       */
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

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest + i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*t;
	int		total;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	total = (ft_strlen((char *)s1) + ft_strlen((char *)s2));
	t = (char *)malloc(sizeof(char) * total + 1);
	if (t == NULL)
		return (NULL);
	ft_strcpy(t, (char *)s1);
	ft_strcpy(ft_strcpy(t, (char *)s1), (char *)s2);
	return (t);
}

// #include <stdio.h>

// int main ()
// {
// 	char i[] = "1234567890";
// 	char j[] = "abcdefghjk";

// 	printf("%s\n", ft_strjoin(i, j));
// 	return (0);
// }