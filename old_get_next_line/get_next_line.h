/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:39:59 by rureshet          #+#    #+#             */
/*   Updated: 2024/11/10 14:52:14 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
// # ifndef BUFFER_SIZE
// #  define BUFFER_SIZE 1000
// # endif
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char	*get_next_line(int fd);
size_t	ft_strlen(char *str);
char	*ft_strdup(char *src);
char	*ft_strncpy(char *dest, char *src, size_t length);
char	*ft_strchr(const char *src, int c);
void	*ft_memmove(void *dest, const void *src, size_t n);

#endif
