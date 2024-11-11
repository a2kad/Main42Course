/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:39:53 by rureshet          #+#    #+#             */
/*   Updated: 2024/11/11 17:21:37 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdio.h>

static char	*find_next_line(int fd, char *buf, char *backup)
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
		if (!backup)
			backup = ft_strdup("");
		if (!backup)
			return (NULL);
		tmp = backup;
		backup = ft_strjoin(tmp, buf);
		free(tmp);
		if (!backup)
			return (NULL);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	return (backup);
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
	remaining = ft_substr(line, count + 1, ft_strlen(line) - count -1);
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
	static char	*backup[MAX_FD];

	if (fd < 0 || fd >= MAX_FD || BUFFER_SIZE <= 0)
		return (NULL);
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	line = find_next_line(fd, buf, backup[fd]);
	free (buf);
	if (!line)
		return (NULL);
	backup[fd] = del_line(line);
	return (line);
}

// int	main(void)
// {
// int		fd1, fd2;
// 	char	*line;

// 	fd1 = open("test1.txt", O_RDONLY);
// 	fd2 = open("test.txt", O_RDONLY);
// 	if (fd1 == -1 || fd2 == -1)
// 	{
// 		printf("Error opening files\n");
// 		return (1);
// 	}
// 	printf("Reading from file1.txt:\n");
// 	while ((line = get_next_line(fd1)) != NULL)
// 	{
// 		printf("%s\n", line);
// 		free(line);
// 	}
// 	close(fd1);

// 	printf("\nReading from file2.txt:\n");
// 	while ((line = get_next_line(fd2)) != NULL)
// 	{
// 		printf("%s\n", line);
// 		free(line);
// 	}
// 	close(fd2);
// 	return (0);
// }
