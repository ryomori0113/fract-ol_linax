/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:39:14 by ryomori           #+#    #+#             */
/*   Updated: 2024/05/01 10:49:00 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
// 	i = 130;
// 	printf("%d\n", ft_isascii(i));
// 	printf("%d\n", isascii(i));
// 	return (0);
// }