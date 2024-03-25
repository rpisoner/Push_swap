/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:54:05 by rpisoner          #+#    #+#             */
/*   Updated: 2024/03/25 18:03:11 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	calc_ramount(t_list **stack_a, int a_size)
{
	t_list	*a;

	a = *stack_a;
	calculate_new_positions(stack_a);
	while (a)
	{
		if (a->position == 1)
		{
			if ((a->new_pos + 1) <= (a_size / 2 + 1))
				return (a->new_pos);
			else
				return (a->new_pos - a_size);
		}
		a = a->next;
	}
	return (0);
}

void	last_moves(t_list **stack_a, int a_size)
{
	int	rotation_amount;

	rotation_amount = calc_ramount(stack_a, a_size);
	while (rotation_amount != 0)
	{
		if (rotation_amount < 0)
		{
			rra(stack_a);
			rotation_amount++;
		}
		else
		{
			ra(stack_a);
			rotation_amount--;
		}
	}
}
