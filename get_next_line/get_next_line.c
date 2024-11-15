/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:39:53 by rureshet          #+#    #+#             */
/*   Updated: 2024/11/12 19:50:13 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static char	*find_next_line(int fd, char *buf, char **backup)
{
	int		read_file;
	char	*tmp;

	read_file = 1;
	while (read_file > 0)
	{
		read_file = read(fd, buf, BUFFER_SIZE);
		if (read_file == -1)
			return (NULL);
		else if (read_file == 0)
			break ;
		buf[read_file] = '\0';
		if (!*backup)
			*backup = ft_strdup("");
		// if (!*backup)
		// 	return (NULL);
		tmp = *backup;
		*backup = ft_strjoin(tmp, buf);
		free(tmp);
		// if (!*backup)
		// 	return (NULL);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	return (*backup);
}

static char	*del_line(char *line)
{
	size_t	count;
	char	*remaining;

	count = 0;
	while (line[count] != '\n' && line[count] != '\0')
		count++;
	if (line[count] == '\0')
		return (NULL);
	remaining = ft_substr(line, count + 1, ft_strlen(line) - count);
	if (*remaining == '\0')
	{
		free(remaining);
		remaining = NULL;
	}
	line[count + 1] = '\0';
	return (remaining);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*buf;
	static char	*backup;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	line = find_next_line(fd, buf, &backup);
	free (buf);
	if (!line)
		return (NULL);
	backup = del_line(line);
	return (line);
}

// int	main(void)
// {
// 	int		fd;
// 	//char	*line;
// 	int i = 0;

// 	fd = open("read_error.txt", O_RDONLY);
// 	if (fd == -1)
// 	{
// 		printf("Error");
// 		return (1);
// 	}
// 	while (i < 2)
// 	{
// 		printf("%s", get_next_line(fd));
// 		i++;
// 		//free(line);
// 	}
// 	close(fd);
// 	return (0);
// }
