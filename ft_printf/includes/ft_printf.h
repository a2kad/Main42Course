/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:26:31 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/31 17:00:01 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *length);
void	ft_checkargs(char c, va_list *args, int *length);
void	ft_show_num(int num, int *length);
void	ft_show_str(char *args, int *length);
void	ft_show_hex(unsigned int num, int *length, char x_or_X);

#endif
