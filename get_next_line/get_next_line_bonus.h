/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:39:59 by rureshet          #+#    #+#             */
/*   Updated: 2024/11/12 16:42:37 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif
# ifndef MAX_FD
#  define MAX_FD 1000
# endif
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_gnl
{
	char	*buf;
	char	*backup;
}			t_gnl;

char	*get_next_line(int fd);
static char	*find_next_line(int fd, t_gnl *gnl);
static char	*del_line(char *line);
size_t	ft_strlen(char const *str);
char	*ft_strdup(char *src);
char	*ft_strchr(const char *src, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
