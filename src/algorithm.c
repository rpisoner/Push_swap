/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:14:31 by rpisoner          #+#    #+#             */
/*   Updated: 2024/04/22 13:28:44 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	move(t_list **stack_a, t_list **stack_b)
{
	int		b_size;
	int		a_size;

	b_size = ft_lstsize(*stack_b);
	a_size = 3;
	while (b_size != 0)
	{
		calculate_new_positions(stack_a);
		calculate_new_positions(stack_b);
		set_best_pos(stack_a, stack_b);
		set_prices(stack_b, a_size, b_size);
		real_moves(stack_a, stack_b, &a_size, &b_size);
	}
	last_moves(stack_a, a_size);
}

void	push_and_substract(t_list **stack_a, t_list **stack_b, int *actual_size)
{
	pb(stack_a, stack_b);
	(*actual_size)--;
}

void	other_elements(t_list **stack_a, t_list **stack_b, int stack_size)
{
	int		half;
	int		actual_size;

	half = (ft_lstsize(*stack_a) / 2) + 1;
	actual_size = stack_size;
	while (actual_size > half && actual_size >= 3)
	{
		if ((*stack_a)->position < half)
			push_and_substract(stack_a, stack_b, &actual_size);
		else
			ra(stack_a);
	}
	while (actual_size > 3)
	{
		if ((*stack_a)->position == stack_size
			|| (*stack_a)->position == stack_size - 1
			|| (*stack_a)->position == stack_size - 2)
			ra(stack_a);
		else
			push_and_substract(stack_a, stack_b, &actual_size);
	}
	if (!is_organized(*stack_a))
		three_elements(stack_a, 0);
	move(stack_a, stack_b);
}

void	algorithm(t_list **stack_a)
{
	t_list	*stack_b;
	size_t	a_size;

	stack_b = NULL;
	a_size = ft_lstsize(*stack_a);
	assign_index(stack_a);
	if (ft_lstsize(*stack_a) == 2)
		two_elements(stack_a, 0);
	else if (ft_lstsize(*stack_a) == 3)
		three_elements(stack_a, 0);
	else if (a_size > 3)
		other_elements(stack_a, &stack_b, ft_lstsize(*stack_a));
}
