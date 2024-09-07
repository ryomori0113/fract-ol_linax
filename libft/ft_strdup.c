/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:28:22 by ryomori           #+#    #+#             */
/*   Updated: 2024/05/01 10:50:28 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//size_t	ft_strlen(const char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }

static void	ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strdup(const char *str)
{
	char	*a;

	a = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (a == NULL)
		return (NULL);
	ft_strcpy(a, str);
	return (a);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//    char *string = "this is a copy";
//    char *string1 = "this is a copy";
//    char *newstr;
//    char *newstr1;
//    if ((newstr = ft_strdup(string)) != NULL)
//       printf("The new string is: %s\n", newstr);
// 	if ((newstr1 = strdup(string1)) != NULL)
//       printf("The new string is: %s\n", newstr1);
//    return 0;
// }