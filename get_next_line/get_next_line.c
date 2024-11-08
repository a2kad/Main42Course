/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:39:53 by rureshet          #+#    #+#             */
/*   Updated: 2024/11/08 21:02:28 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	static char		*buffer = NULL;
	static size_t	buf_size = 0;
	size_t			read_file;
	char			*newline;
	size_t			line_length;
	char			*line;

	if (!buffer)
	{
		buffer = malloc(BUFFER_SIZE + 1);
		if (!buffer)
			return (NULL);
	}
	read_file = read(fd, buffer + buf_size, BUFFER_SIZE - buf_size);
	while (read_file > 0)
	{
		buf_size += read_file;
		buffer[buf_size] = '\0';
		newline = ft_strchr(buffer, '\n');
		if (newline)
		{
			line_length = newline - buffer + 1;
			line = malloc(line_length + 1);
			if (!line)
				return (NULL);
			ft_strncpy(line, buffer, line_length);
			line[line_length] = '\0';
			ft_memmove(buffer, newline + 1, buf_size - line_length);
			buf_size -= line_length;
			return (line);
		}
	}
	// if (read_file == 0 && buf_size == 0)
	// {
	// 	free(buffer);
	// 	buffer = NULL;
	// 	return (NULL);
	// }
	if (buf_size > 0)
	{
		line = ft_strdup(buffer);
		free(buffer);
		buffer = NULL;
		buf_size = 0;
		return (line);
	}
	free(buffer);
	buffer = NULL;
	return(NULL);
}

// int	main(void)
// {
// 	int	fd;
// 	char	*line;

// 	fd = open("test.txt", O_RDONLY);
// 	if (fd == -1)
// 	{
// 		printf("Error");
// 		return (1);
// 	}
// 	while ((line = get_next_line(fd)) != NULL)
// 	{
// 		printf("%s ---", line);
// 		free(line);
// 	}
// 	close(fd);
// 	return (0);
// }
