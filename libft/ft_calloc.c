/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:58:08 by ryomori           #+#    #+#             */
/*   Updated: 2024/05/01 11:01:05 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

// void	ft_bzero(void *s, int n)
// {
// 	int		i;
// 	char	*a;

// 	a = (char *)s;
// 	i = 0;
// 	while (i < n)
// 	{
// 		*a = '\0';
// 		i++;
// 		a++;
// 	}
// }

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count > 0 && size > 0 && SIZE_MAX / size < count)
		return (NULL);
	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int main()
// {
//     // Check if memory allocation was successful
// 	int* array = (int*)calloc(5, sizeof(int));
//     int	i;

// 	i = 0;
// 	if (array)
// 	{
// 		while (i < 5)
// 		{
// 			// This should print "0 0 0 0 0 "
// 			printf("%d ", array[i]);
// 			i++;
// 		}
// 		printf("\n");
//         free(array);
//     }
// 	else
//         printf("Memory allocation failed\n");
// 	return (0);
// }