/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:26:43 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/31 17:06:39 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

#include <stdio.h>

void	ft_putchar(char c, int *length)
{
	write(1, &c, 1);
	(*length)++;
}

void	ft_checkargs(char c, va_list *args, int *length)
{
	char	symb;

	if (c == 'c')
	{
		symb = va_arg(*args, int);
		ft_show_str(&symb, length);
	}
	else if (c == 's')
		ft_show_str(va_arg(*args, char *), length);
	else if (c == 'd')
		ft_show_num(va_arg(*args, int), length);
	/*else if (c == 'p')
		ft_show_num(va_arg(*args, int));
	else if (c == 'i')
		ft_show_num(va_arg(*args, int));
	else if (c == 'u')
		ft_show_num(va_arg(*args, int));*/
	else if (c == 'x')
		ft_show_hex(va_arg(*args, unsigned int), length, c);
	else if (c == 'X')
		ft_show_hex(va_arg(*args, unsigned int), length, c);
	else if (c == '%')
		ft_putchar('%', length);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
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

int	main(void)
{
	int	i;

	i = ft_printf("%x-", 2555555);
	ft_printf("%d", i);
}
