/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:17:34 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/21 19:17:50 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strdup(const char *s)
{
	int	i;
	int	j;
	char	*dup;

	i = 0;
	j = ft_strlen(s);
	while (i < j)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (*dup);
}
