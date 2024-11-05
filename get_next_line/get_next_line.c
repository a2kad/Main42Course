/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:39:53 by rureshet          #+#    #+#             */
/*   Updated: 2024/11/05 18:37:48 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

size_t	line_count(char *txt)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while(txt[i])
	{
		if (txt[i] == '\n' || txt[i] == '\0')
			count++;
		i++;
	}
	return(count);
}

void	print_line(char *txt)
{
	int	i;

	i = 0;
	while (txt[i] != '\n' || txt[i] != '\0')
	{
		printf("%c", txt[i]);
		i++;
	}
}

char	*get_next_line(int fd)
{
	size_t	read_file;
	char	*buffer;

	buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buffer)
		return NULL;
	read_file = read(fd, buffer, BUFFER_SIZE);
	if (read_file <= 0)
	{
		free(buffer);
		buffer = NULL;
	}
	printf("%s", buffer);
	printf("\n--%zu\n", read_file);
	printf("\nLine:\n");
	printf("\nLine count: %zu\n", line_count(buffer));
	print_line(buffer);
	return (buffer);
}

int	main(void)
{
	int		fd;
	char	*txt;

	fd = open("test.txt", O_RDONLY);
	txt = get_next_line(fd);
	// printf("%s", txt);
	// printf("\n--%d", fd);
}
