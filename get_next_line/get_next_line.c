/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:39:53 by rureshet          #+#    #+#             */
/*   Updated: 2024/11/04 14:51:06 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	size_t	rf;
	char	*txt;
	int i;

	i = 0;
	txt = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	rf = read(fd, txt, BUFFER_SIZE);
	printf("%s", txt);
	printf("\n%zu", rf);
	return (txt);
}

int	main(void)
{
	int	fd;
	char	*txt;
	fd = open("test.txt", O_RDONLY);
	txt = get_next_line(fd);
	printf("%s", txt);
}
