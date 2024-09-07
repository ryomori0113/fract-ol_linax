/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:40:58 by ryomori           #+#    #+#             */
/*   Updated: 2024/04/28 10:58:43 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
//     printf("%c\n", toupper('a'));
//     printf("%c\n", toupper('A'));
//     printf("%c\n", toupper('!'));
// 	printf("%c\n", ft_toupper('a'));
//     printf("%c\n", ft_toupper('A'));
//     printf("%c\n", ft_toupper('!'));
// }