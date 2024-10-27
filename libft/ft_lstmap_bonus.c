/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:10:44 by rureshet          #+#    #+#             */
/*   Updated: 2024/10/27 13:39:53 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_obj;
	void	*new_cont;

	new_list = NULL;
	if (lst == NULL || f == NULL)
		return (NULL);
	while (lst)
	{
		new_cont = f(lst->content);
		new_obj = ft_lstnew(new_cont);
		if (!new_obj)
		{
			del(new_cont);
			ft_lstclear(&new_list, del);
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_obj);
		lst = lst->next;
	}
	return (new_list);
}
