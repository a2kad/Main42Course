/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:58:12 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/31 16:58:26 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_show_num(int num, int *length)
{
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*length) += 11;
	}
	else if (num < 0)
	{
		write(1, "-", 1);
		ft_show_num(num *= -1, length);
		(*length) += 1;
	}
	else
	{
		if (num > 9)
			ft_show_num(num / 10, length);
		ft_putchar(num % 10 + '0', length);
	}
}

void	ft_show_hex(unsigned int num, int *length, char x_or_X)
{
	char	*base;
	char	res[20];
	int		i;

	if (x_or_X == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	i = 0;
	while (num != 0)
	{
		res[i] = base[num % 16];
		num = num / 16;
		i++;
	}
	res[i] = '\0';
	while (i > 0)
	{
		i--;
		ft_putchar(res[i], length);
	}
}
