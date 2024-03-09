/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:14:31 by rpisoner          #+#    #+#             */
/*   Updated: 2024/02/27 20:54:06 by rpisoner         ###   ########.fr       */
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

void	move(t_list **stack_a, t_list **stack_b)
{
	t_list	*aux_b;
	int		b_size;

	b_size = ft_lstsize(*stack_b);
	while (b_size != 0)
	{
		aux_b = *stack_b;
		while (aux_b && (*stack_a)->position - aux_b->position != 1)
			aux_b = aux_b->next;
		if (!aux_b)
		{
			error_exit();
		}
		if (aux_b->position > (size_t)(b_size / 2))
		{
			while (ft_lstsize(aux_b) != b_size)
				rrb(stack_b);
		}
		else
		{
			while (ft_lstsize(aux_b) != b_size)
				rb(stack_b);
		}
		pa(stack_a, stack_b);
		b_size--;
	}
}

void	other_elements(t_list **stack_a, t_list **stack_b)
{
	size_t	half;
	size_t	max_size;
	size_t	i;

	i = 0;
	half = (ft_lstsize(*stack_a) / 2) + 1;
	max_size = ft_lstsize(*stack_a);
	while (i < half)
	{
		if ((*stack_a)->position < half)
			pb(stack_a, stack_b);
		else
			ra(stack_a);
		i++;
	}
	while (ft_lstsize(*stack_a) > 3)
	{
		if ((*stack_a)->position == max_size
			|| (*stack_a)->position == max_size - 1
			|| (*stack_a)->position == max_size - 2)
			ra(stack_a);
		else
			pb(stack_a, stack_b);
	}
	if (!is_organized(*stack_a))
		three_elements(stack_a, 0);
	move(stack_a, stack_b);
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
