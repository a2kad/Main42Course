/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:51:31 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/30 19:40:08 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_show_str(char *args, int *length)
{
	char	*zero;
	int		i;

	i = 0;
	if (!args)
	{
		zero = "(null)";
		write(1, &zero, 6);
	}
	else
	{
		while(args[i] != '\0')
		{
			ft_putchar(args[i], length);
			i++;
		}
	}
}
