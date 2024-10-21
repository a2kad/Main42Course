/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:20:28 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/21 19:14:11 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if(n == 0)
		return(1);
	if(n < 0)
		len += 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int	len;
	int num;
	char	*str;

	len = ft_numlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
	{
		num = n;
	}
	str[len] = '\0';
	while(num != 0)
	{
		str[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (str);
}
