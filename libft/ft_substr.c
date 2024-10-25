/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:32:42 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/25 20:03:36 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;
	size_t	start_len;
	char	*result;

	if (len < 1)
		return ((char *)ft_calloc(1, 1));
	str_len = ft_strlen(s);
	if (start >= str_len)
		return ((char *)ft_calloc(1, 1));
	start_len = ft_strlen(&s[start]);
	if (start_len < len)
		result = (char *)malloc((start_len + 1) * sizeof(char));
	else
		result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	if (start_len < len)
		ft_strlcpy(result, &s[start], start_len + 1);
	else
		ft_strlcpy(result, &s[start], len + 1);
	return (result);
}
