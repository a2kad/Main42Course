/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:58:12 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/30 22:31:29 by rureshet         ###   ########.fr       */
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
	if (num < 0)
	{
		write(1, "-", 1);
		ft_show_num(num *= -1, length);
	}
	if (num > 9)
		ft_show_num(num / 10, length);
	ft_putchar((num % 10 + '0'), length);
}
