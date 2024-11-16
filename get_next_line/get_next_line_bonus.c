/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:39:53 by rureshet          #+#    #+#             */
/*   Updated: 2024/11/16 18:48:16 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_into_buffer(int fd, char *buffer)
{
	int		read_file;
	char	*buf_tmp;

	buf_tmp = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf_tmp)
		return (NULL);
	read_file = 1;
	while (!(buffer && ft_strchr(buffer, '\n')) && read_file != 0)
	{
		read_file = read(fd, buf_tmp, BUFFER_SIZE);
		if (read_file == -1)
		{
			free(buf_tmp);
			return (NULL);
		}
		buf_tmp[read_file] = '\0';
		buffer = ft_strjoin(buffer, buf_tmp);
	}
	free(buf_tmp);
	return (buffer);
}

char	*find_line(char *buffer)
{
	int		i;
	char	*line;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*del_line(char *buffer)
{
	int		i;
	int		j;
	char	*remaining;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	remaining = (char *)malloc(sizeof(char) * (ft_strlen(buffer) - i + 1));
	if (!remaining)
		return (NULL);
	i++;
	j = 0;
	while (buffer[i])
		remaining[j++] = buffer[i++];
	remaining[j] = '\0';
	free(buffer);
	return (remaining);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buffer[4096];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer[fd] = read_into_buffer(fd, buffer[fd]);
	if (!buffer[fd])
		return (NULL);
	line = find_line(buffer[fd]);
	buffer[fd] = del_line(buffer[fd]);
	return (line);
}

// int	main(void)
// {
// 	int		fd1;
// 	int		fd2;
// 	int		i;
// 	char	*line;

// 	fd1 = open("tests/read_error.txt", O_RDONLY);
// 	if (fd1 == -1)
// 	{
// 		printf("Error");
// 		return (0);
// 	}
// 	fd2 = open("tests/test1.txt", O_RDONLY);
// 	if (fd2 == -1)
// 	{
// 		printf("Error");
// 		return (0);
// 	}
// 	i = 1;
// 	while ((line = get_next_line(fd1)) != NULL)
// 	{
// 		printf("Line %d -> %s\n", i, line);
// 		i++;
// 		free(line);
// 	}
// 	i = 1;
// 	while ((line = get_next_line(fd2)) != NULL)
// 	{
// 		printf("Line %d -> %s\n", i, line);
// 		i++;
// 		free(line);
// 	}
// 	close(fd1);
// 	close(fd2);
// 	return (0);
// }
