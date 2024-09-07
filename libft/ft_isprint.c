/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:49:59 by ryomori           #+#    #+#             */
/*   Updated: 2024/05/01 10:49:10 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
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
// 	i = 'd';
// 	printf("%d\n", ft_isprint(i));
// 	printf("%d\n", isprint(i));
// 	return (0);
// }