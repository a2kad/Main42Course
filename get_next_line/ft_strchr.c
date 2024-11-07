/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 22:00:11 by rureshet          #+#    #+#             */
/*   Updated: 2024/11/06 22:13:17 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
# include <unistd.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	cc;

	cc = (char)c;
	while (*s != '\0')
	{
		if (*s == cc)
		{
			return ((char *)s);
		}
		s++;
	}
	if (cc == '\0')
	{
		return ((char *)s);
	}
	return (0);
}

int main(void)
{
	printf("%s", ft_strchr("hkaSHDJHkjhshj\njhkhdkjdfhjsdfh\najkshdajahjasd\0", '\n'));
}
