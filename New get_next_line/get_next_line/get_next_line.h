/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:39:59 by rureshet          #+#    #+#             */
/*   Updated: 2024/11/15 21:36:33 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*read_into_buffer(int fd, char *buffer);
char	*find_line(char *buffer);
char	*del_line(char *buffer);
size_t	ft_strlen(char *str);
char	*ft_strchr(char *str, int c);
char 	*ft_strjoin(char *str1, char *str2);

#endif
