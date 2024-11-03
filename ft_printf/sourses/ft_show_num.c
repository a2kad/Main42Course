/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:58:12 by rureshet          #+#    #+#             */
/*   Updated: 2024/11/03 13:43:03 by rureshet         ###   ########.fr       */
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
	if (num == 0)
		ft_putchar('0', length);
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

void	ft_show_pointer(size_t ptr, int *length)
{
	char		*base;
	char		res[25];
	int			i;

	base = "0123456789abcdef";
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		(*length) += 5;
		return ;
	}
	write(1, "0x", 2);
	(*length) += 2;
	i = 0;
	while (ptr != 0)
	{
		res[i] = base[ptr % 16];
		ptr = ptr / 16;
		i++;
	}
	res[i] = '\0';
	while (i-- > 0)
		ft_putchar(res[i], length);
}

void	ft_show_unsigned(unsigned int nbr, int *length)
{
	if (nbr > 9)
		ft_show_unsigned(nbr / 10, length);
	ft_putchar(nbr % 10 + '0', length);
}
