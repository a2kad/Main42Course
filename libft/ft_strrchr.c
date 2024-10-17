/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:25:14 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/17 17:46:42 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (*s == c)
		{
			return ((char *)s - i);
		}
		i--;
	}
	if (c == '\0')
	{
		return ((char *)s - i);
	}
	return (0);
}

int	main(void)
{
	char	*s;

	s = "Test";
	printf("%s\n", ft_strrchr(s, 'e'));
	printf("%s", strrchr(s, 'e'));
}
