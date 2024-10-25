/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:25:14 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/25 19:54:48 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	cc;

	cc = (char)c;
	i = ft_strlen(s);
	if (c == '\0')
	{
		return ((char *)s + i);
	}
	while (i >= 0)
	{
		if (s[i] == cc)
		{
			return ((char *)s + i);
		}
		i--;
	}
	return (NULL);
}
