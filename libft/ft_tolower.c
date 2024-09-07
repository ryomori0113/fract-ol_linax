/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:49:52 by ryomori           #+#    #+#             */
/*   Updated: 2024/04/28 10:58:29 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
//     printf("%c\n", tolower('a'));
//     printf("%c\n", tolower('A'));
//     printf("%c\n", tolower('!'));
//     printf("%c\n", ft_tolower('a'));
//     printf("%c\n", ft_tolower('A'));
//     printf("%c\n", ft_tolower('!'));
// }