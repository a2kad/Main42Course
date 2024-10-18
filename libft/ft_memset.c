/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:19:26 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/18 14:56:07 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n > 0)
	{
		p[n - 1] = c;
		n--;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	void	*s;
	int	c;
	size_t	n;

	s = "Test";
	c = 0;
	n = 2;
	printf("%p\n", ft_memset(s, c, n));
	printf("%p", memset(s, c, n));
}*/
