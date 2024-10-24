/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 22:00:11 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/24 19:26:25 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cc;

	cc = (char)c;
	while (*s != '\0')
	{
		if (*s == cc)
		{
			return ((char *)s);
		}
		s++;
	}
	if (cc == '\0')
	{
		return ((char *)s);
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*s;

// 	s = "Test";
// 	printf("%s\n", ft_strchr(s, 'e' + 256));
// 	printf("%s", strchr(s, 'e' + 256));
// }
