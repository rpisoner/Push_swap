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

size_t	calc_original_pos(t_list *stack, t_list *node)
{
	t_list	*copy;
	int		node_segment_size;

	copy = node;
	node_segment_size = 0;
	while (copy)
	{
		node_segment_size++;
		copy = copy->next;
	}
	return (ft_lstsize(stack) - node_segment_size);
}

void	move_top(t_list **stack_a, t_list **stack_b, t_list *following)
{
	t_list	*copy_a;
	t_list	*copy_b;
	int		original_pos;

	original_pos = calc_original_pos(*stack_a, following);
	copy_a = *stack_a;
	copy_b = *stack_b;
	while (ft_lstsize(following) != ft_lstsize(*stack_a))
		ra(stack_a);
	if (*stack_a)
		pa(stack_a, stack_b);
	while (ft_lstsize(following) != original_pos)
		rra(stack_a);
}

t_list	*find_next(t_list *stack_a, t_list *stack_b)
{
	t_list	*following;
	t_list	*stackb_copy;

	following = stack_a;
	stackb_copy = stack_b;
	while (stackb_copy->position - following->position != 1)
	{
		if (!following->content)
		{
			stackb_copy = stackb_copy->next;
			following = stack_a;
		}
		else if (following->next != NULL)
			following = following->next;
	}
	return (following);
}

void	other_elements(t_list **stack_a, t_list **stack_b)
{
	size_t	half;
	size_t	i;

	i = 0;
	half = (ft_lstsize(*stack_a) / 2) + 1;
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
		if ((*stack_a)->position == (size_t)ft_lstsize(*stack_a)
			|| (*stack_a)->position == (size_t)ft_lstsize(*stack_a) - 1
			|| (*stack_a)->position == (size_t)ft_lstsize(*stack_a) - 2)
			ra(stack_a);
		else
			pb(stack_a, stack_b);
	}
	three_elements(stack_a, 0);
	while (*stack_b && *stack_a)
		move_top(stack_a, stack_b, find_next(*stack_a, *stack_b));
}

void	algorithm(t_list **stack_a)
{
	t_list	*stack_b;

	stack_b = NULL;
	assign_index(stack_a);
	print_position(*stack_a);
	if (ft_lstsize(*stack_a) == 2)
		two_elements(stack_a, 0);
	else if (ft_lstsize(*stack_a) == 3)
		three_elements(stack_a, 0);
	else
		other_elements(stack_a, &stack_b);
}
