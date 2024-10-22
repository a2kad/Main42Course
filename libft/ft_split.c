/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:19:54 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/22 22:39:45 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*char	**ft_split(char const *s, char c)
{*/
	int	word_cnt(char *str, char *delim)
	{
		int	prev_delim;
		int	words;
		int	i;

		prev_delim = 1;
		words = 0;
		i = 0;
		while (str[i])
		{
			if (str[i] == *delim)
				prev_delim = 1;
			else if (prev_delim)
				words++;
			if (str[i] != *delim)
				prev_delim = 0;
			i++;
		}
		return (words);
	}
/*}*/
int main(void)
{
	printf("%d", word_cnt("hi hi hi", " "));
}
