#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
# define BUFFER_SIZE 8

int	main(void)
{
	int	fd;
	char	*buf;
	int	read_file;
	int	couter;

	fd = open("test.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Error");
		return (1);
	}
	read_file = 1;
	couter = 0;
	buf = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	while (read_file > 0)
	{
		read_file = read(fd, buf, BUFFER_SIZE);
		if (read_file == -1)
			return (0);
		else if (read_file == 0)
			break ;
		buf[read_file] = '\0';
		couter += read_file;
		printf("%s ---\n", buf);
		printf("%d ---\n", read_file);
		printf("%d ---\n", couter);
		//free(buf);
	}
	close(fd);
	return (0);
}
