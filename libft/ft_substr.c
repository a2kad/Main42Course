/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:32:42 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/24 21:31:36 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t	j;
	char			*str;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	// if ((size_t)len > ft_strlen(s + start))
	// 	(size_t)len = ft_strlen(s + start);
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j <= len - 1)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

#include <stdio.h>

int	main(void)
{
	printf("%s", ft_substr("aa dfsdfsd fsdfsd sfd", 2, 5));
}
