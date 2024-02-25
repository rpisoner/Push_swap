/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:14:31 by rpisoner          #+#    #+#             */
/*   Updated: 2024/02/24 18:14:00 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

//while (1)
//	recorre todooooo el stacka mirando donde deberias colocar cada nodo
//	y cuando el nodo que quieres pushear y el nodo al que vas a pushear estan en la cabezera pusheas
void	other_elements(t_list **stack_a, t_list **stack_b)
{
	size_t	half;
	size_t	i;

	i = 0;
	half = (ft_lstsize(*stack_a) / 2) + 1;
	while (i < half)
	{
		pb(stack_a, stack_b);
		i++;
	}
}

void	algorithm(t_list **stack_a)
{
	t_list	*stack_b;

	stack_b = NULL;
	assign_index(stack_a);
	if (ft_lstsize(*stack_a) == 2)
		two_elements(stack_a, 0);
	else if (ft_lstsize(*stack_a) == 3)
		three_elements(stack_a, 0);
	else
		other_elements(stack_a, &stack_b);
}
