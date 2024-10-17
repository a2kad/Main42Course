/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:25:06 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/17 13:19:52 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	if (i < size - 1 && src[i] != '\0')
	{
		while (src[i])
		{
			dst[i] = src[i];
			i++;
		}
	}
	if (i < size)
		dst[i] = '\0';
	while (src[i])
	{
		i++;
	}
	return (i);
}
