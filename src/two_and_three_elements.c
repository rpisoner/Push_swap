/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_and_three_elements.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:55:06 by rpisoner          #+#    #+#             */
/*   Updated: 2024/04/22 13:29:32 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	two_elements(t_list **stack, int n_stack)
{
	if ((*stack)->content > (*stack)->next->content)
	{
		if (n_stack == 0)
			sa(stack);
		else if (n_stack == 1)
			sb(stack);
	}
}

void	three_elements(t_list **stack, int n)
{
	if ((*stack)->next->content < (*stack)->content)
	{
		if ((*stack)->content > (*stack)->next->next->content && n == 0)
			ra(stack);
		if ((*stack)->content > (*stack)->next->content && n == 0)
			sa(stack);
		if ((*stack)->content > (*stack)->next->next->content && n == 1)
			rb(stack);
		if ((*stack)->content > (*stack)->next->content && n == 1)
			sb(stack);
	}
	else if ((*stack)->content > (*stack)->next->next->content && n == 0)
		rra(stack);
	else if ((*stack)->content > (*stack)->next->next->content && n == 1)
		rrb(stack);
	else if (n == 0)
	{
		sa(stack);
		ra(stack);
	}
	else
	{
		sb(stack);
		rb(stack);
	}
}
