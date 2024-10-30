/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:26:43 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/30 22:20:45 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putchar(char c, int *length)
{
	write(1, &c, 1);
	(*length)++;
}

void	ft_checkargs(char c, va_list *args, int *length)
{
	if (c == 's')
		ft_show_str(va_arg(*args, char *), length);
	else if (c == 'c')
		ft_show_str(va_arg(*args, char *), length);
	else if (c == 'd')
		ft_show_num(va_arg(*args, int), length);
	/*else if (c == 'p')
		ft_show_num(va_arg(*args, int));
	else if (c == 'i')
		ft_show_num(va_arg(*args, int));
	else if (c == 'u')
		ft_show_num(va_arg(*args, int));
	else if (c == 'x')
		ft_show_num(va_arg(*args, int));
	else if (c == 'X')
		ft_show_num(va_arg(*args, int));
	else if (c == '%')
		ft_show_num(va_arg(*args, int));*/
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_checkargs(str[i], &args, &length);
			i++;
		}
		else
		{
			ft_putchar(str[i], &length);
			i++;
		}
	}
	va_end(args);
	return (length);
}

#include <stdio.h>

int	main(void)
{
	int	i;
	i = ft_printf("x%dx", 22222);
	ft_printf("z%dz", i);
}
