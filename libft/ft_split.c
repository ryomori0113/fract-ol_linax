/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:01:28 by ryomori           #+#    #+#             */
/*   Updated: 2024/04/29 12:11:05 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_strings(char **string, size_t i)
{
	while (i > 0)
	{
		i--;
		free(string[i]);
	}
	free (string);
	return (0);
}

static size_t	word_count(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static void	copy_word(char *word, const char *s, size_t word_e, size_t word_len)
{
	size_t	i;

	i = 0;
	while (word_len > 0)
	{
		word[i] = s[word_e - word_len];
		i++;
		word_len--;
	}
	word[i] = '\0';
	return ;
}

static char	**words_split(const char *s, char c,
	char **new_strings, size_t word_len)
{
	size_t	i;
	size_t	word;
	size_t	word_l;

	i = 0;
	word = 0;
	word_l = 0;
	while (word < word_len)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			word_l++;
		}
		new_strings[word] = (char *)malloc(sizeof(char) * (word_l + 1));
		if (!new_strings)
			return (free_strings(new_strings, word));
		copy_word (new_strings[word], s, i, word_l);
		word_l = 0;
		word++;
	}
	new_strings[word] = 0;
	return (new_strings);
}

char	**ft_split(char const *str, char c)
{
	char	**strings;
	size_t	word_len;

	if (!str)
		return (0);
	word_len = word_count(str, c);
	strings = (char **)malloc(sizeof(char *) * (word_len + 1));
	if (!strings)
		return (0);
	strings = words_split(str, c, strings, word_len);
	return (strings);
}

// int main()
// {
//     char const *str = "Hello, world! This is a test string.";
//     char delimiter = ' ';
//     char **splitStrings;

//     splitStrings = ft_split(str, delimiter);

//     if (splitStrings != NULL)
// 	{
//         size_t i = 0;
//         while (splitStrings[i] != NULL)
// 		{
//             printf("Split string [%zu]: %s\n", i, splitStrings[i]);
//             free(splitStrings[i]); // Free each string
//             i++;
//         }
//         free(splitStrings); // Free the array of strings
//     }
// 	else
//         printf("Failed to split string.\n");

//     return (0);
// }