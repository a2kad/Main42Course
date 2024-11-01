/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:26:31 by rureshet          #+#    #+#             */
/*   Updated: 2024/11/01 15:31:25 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_checkargs(char c, va_list *args, int *length, int *i);
void	ft_putchar(char c, int *length);
void	ft_show_num(int num, int *length);
void	ft_show_str(char *args, int *length);
void	ft_show_hex(unsigned int num, int *length, char x_or_X);
void	ft_show_pointer(size_t ptr, int *length);
void	ft_show_unsigned(unsigned int nbr, int *length);

#endif
