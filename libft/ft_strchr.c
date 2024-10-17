/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 22:00:11 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/17 17:18:04 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s;

	s = "Test";
	printf("%s\n", ft_strchr(s, 'e'));
	printf("%s", strchr(s, 'e'));
}
*/
