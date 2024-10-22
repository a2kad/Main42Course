/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:16:45 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/22 19:21:32 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*src1;
	char	*src2;

	i = 0;
	src1 = (char *)s1;
	src2 = (char *)s2;
	while (i < n)
	{
		if (src1[i] != src2[i])
		{
			return ((unsigned char)src1[i] - (unsigned char)src2[i]);
		}
		i++;
	}
	return (0);
}
