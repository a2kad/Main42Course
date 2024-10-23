/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:19:54 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/23 19:15:11 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	ft_wordwrite(char **arr, char const *str, char delim, int words_cnt)
{
	unsigned int	i;
	int	j;
	size_t	word_len;

	i = 0;
	j = 0;
	while (j < words_cnt)
	{
		while (str[i] == delim)
			i++;
		word_len = 0;
		while (str[i + word_len] != delim && str[i + word_len])
			word_len++;
		arr[j] = ft_substr(str, i, word_len);
		if (!arr[j])
		{
			while (--j >= 0)
			{
				free(arr[j]);
			}
			free(arr);
		}
		i += word_len;
		j++;
	}
}

size_t	ft_wordscnt(char const *str, char delim)
{
	int	prev_delim;
	size_t	words;
	int	i;

	prev_delim = 1;
	words = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == delim)
			prev_delim = 1;
		else if (prev_delim)
			words++;
		if (str[i] != delim)
			prev_delim = 0;
		i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	size_t		words_cnt;
	char	**arr;

	words_cnt = ft_wordscnt(s, c);
	arr = (char **)malloc(sizeof(char *) * (words_cnt + 1));
	/*arr = (char **)ft_calloc((words_cnt + 1), (sizeof(char *)));*/
	ft_wordwrite(arr, s, c, words_cnt);
	return (arr);
}
/*
int main(void)
{
	char **result = ft_split("hi hi dfdgdfsg  fddsg  hi ", ' ');
	for (int i = 0; result[i] != NULL; i++)
	{
		printf("%s\n", result[i]);
	}
}
*/
