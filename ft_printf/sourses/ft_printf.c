/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:26:43 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/29 22:22:50 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_checkargs(char c, va_list *args)
{
	if (c == 'c')
		ft_show_str(va_arg(*args, char));
	/*else if (c == 's')
		ft_show_str(va_arg(*args, char *));*/
	else if (c == 'p')
		ft_show_num(va_arg(*args, int));
	/*else if (c == 'd')
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

	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_checkargs(str[i], &args);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	va_end(args);
	return (i);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_printf("aaa%c", 'b'));
}
