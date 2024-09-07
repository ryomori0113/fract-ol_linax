/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:21:23 by ryomori           #+#    #+#             */
/*   Updated: 2024/05/01 10:49:05 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main ()
// {
// 	int i;
// 	i = '1';
// 	printf("%d\n", ft_isdigit(i));
// 	printf("%d\n", isdigit(i));
// 	return (0);
// }