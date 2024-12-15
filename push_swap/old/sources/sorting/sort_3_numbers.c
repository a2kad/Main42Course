/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rureshet <rureshet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:56:33 by rureshet          #+#    #+#             */
/*   Updated: 2024/12/15 17:58:22 by rureshet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_3_numbers(long *stack_a, int *numbers_in_stack_a)
{
	if ((stack_a[0] > stack_a[1]) && (stack_a[1] < stack_a[2]) && (stack_a[0] < stack_a[2]))
		swap_stack_a(stack_a, numbers_in_stack_a);
	if ((stack_a[0] > stack_a[1]) && (stack_a[1] > stack_a[2]) && (stack_a[0] > stack_a[2]))
	{
		swap_stack_a(stack_a, numbers_in_stack_a);
		reverse_rotate_stack_a(stack_a, numbers_in_stack_a);
	}
	if ((stack_a[0] > stack_a[1]) && (stack_a[1] < stack_a[2]) && (stack_a[0] > stack_a[2]))
		rotate_stack_a(stack_a, numbers_in_stack_a);
	if ((stack_a[0] < stack_a[1]) && (stack_a[1] > stack_a[2]) && (stack_a[0] < stack_a[2]))
	{
		swap_stack_a(stack_a, numbers_in_stack_a);
		rotate_stack_a(stack_a, numbers_in_stack_a);
	}
	if ((stack_a[0] < stack_a[1]) && (stack_a[1] > stack_a[2]) && (stack_a[0] > stack_a[2]))
		reverse_rotate_stack_a(stack_a, numbers_in_stack_a);
}
