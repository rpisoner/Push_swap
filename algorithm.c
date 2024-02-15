/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:14:31 by rpisoner          #+#    #+#             */
/*   Updated: 2024/02/15 15:25:55 by rpisoner         ###   ########.fr       */
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

void	other_elements(t_list **stack_a, t_list **stack_b)
{
	t_list	*copy;
	int		diff;
	int		og_size;

	copy = *stack_a;
	og_size = ft_lstsize(*stack_a);
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	diff = 0;
	while (*stack_a)
	{
		diff = (*stack_a)->content - (*stack_b)->content;
		if ((*stack_a)->next->content)
		{
			if (diff == 1 || diff < (*stack_a)->next->content - (*stack_b)->content)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
			*stack_a = (*stack_a)->next;
			if (!(*stack_a)->next)
				*stack_a = copy;
		}
		else
			break;
	}
	while (ft_lstsize(*stack_b) > 0)
		pa(stack_a, stack_b);
}
//while (1)
//	recorre todooooo el stacka mirando donde deberias colocar cada nodo
//	y cuando el nodo que quieres pushear y el nodo al que vas a pushear estan en la cabezera pusheas

void	algorithm(t_list **stack_a)
{
	t_list	*stack_b;

	stack_b = NULL;
	if (ft_lstsize(*stack_a) == 2)
		two_elements(stack_a, 0);
	else if (ft_lstsize(*stack_a) == 3)
		three_elements(stack_a, 0);
	else
		other_elements(stack_a, &stack_b);
}
