/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:16:33 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/21 19:48:49 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;


	if (little == NULL || little[0] == '\0' )
	{
		return((char *)big);
	}
	i = 0;
	j = 0;
	while (little[i] && i < len)
	{
		if(little[i] == big[i])
		{
			while (little[i + j] == big[i + j])
			{
				
			}

		}
		i++;
	}
}
