/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:51:31 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/31 16:58:39 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_show_str(char *args, int *length)
{
	int		i;

	i = 0;
	if (!args)
		write(1, "(null)", 6);
	else
	{
		while (args[i] != '\0')
		{
			ft_putchar(args[i], length);
			i++;
		}
	}
}
