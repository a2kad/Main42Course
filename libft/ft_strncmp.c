/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:40:31 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/23 20:51:07 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0' && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
	//return (*(unsigned char*)s1 - *(unsigned char*)s2);
// 	size_t	i;

// 	i = 0;
// 	while ((s1[i] || s2[i]) && n > 0)
// 	{
// 		if (s1[i] < s2[i])
// 			return (-1);
// 		else if (s1[i] > s2[i])
// 			return (1);
// 		else if (s1[i] == s2[i])
// 		{
// 			i++;
// 			n--;
// 		}
// 	}
// 	return (0);
// }
