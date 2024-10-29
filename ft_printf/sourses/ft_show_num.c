/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:58:12 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/29 21:55:36 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_show_num(int args)
{
	char	*zero;
	int		i;

	if (!args)
	{
		zero = "(null)";
		write(1, &zero, 6);
	}
	else
	{
		while(args[i])
		{
			write(1, &args[i], 1);
			i++;
		}
	}
}
