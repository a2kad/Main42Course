/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:39:50 by rureshet          #+#    #+#             */
/*   Updated: 2024/11/08 20:00:30 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	size_t	i;
	size_t	j;
	char	*dup;

	i = 0;
	j = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * (j + 1));
	while (i < j)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*ft_strncpy(char *dest, char *src, size_t length)
{
	size_t	i;

	i = 0;
	while (i < length && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < length)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strchr(const char *src, int c)
{
	char	c_cpy;

	c_cpy = c;
	while (*src != '\0')
	{
		if (*src == c_cpy)
			return ((char *)src);
		src++;
	}
	if (c_cpy == '\0')
		return ((char *)src);
	return (0);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_cpy;
	const unsigned char	*src_cpy;
	size_t				i;

	dest_cpy = (unsigned char *)dest;
	src_cpy = (unsigned char *)src;
	i = 0;
	if (!dest_cpy && !src_cpy)
		return (NULL);
	if (dest_cpy < src_cpy)
	{
		while (i < n)
		{
			dest_cpy[i] = src_cpy[i];
			i++;
		}
	}
	else
	{
		while (n--)
			dest_cpy[n] = src_cpy[n];
	}
	return (dest_cpy);
}
// #include <stdio.h>
// int main(void)
// {
// 	char dest[50];
// 	const char *src = "Hello world";
// 	printf("%s", (char *)ft_memmove(dest, src , 5));
// }
