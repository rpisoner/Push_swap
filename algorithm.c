/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:14:31 by rpisoner          #+#    #+#             */
/*   Updated: 2024/02/10 17:51:04 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_elements(t_list **stack_a)
{
	if ((*stack_a)->content > (*stack_a)->next->content)
		sa(stack_a);
}

void	three_elements(t_list **stack_a)
{
	if ((*stack_a)->next->content < (*stack_a)->content)
	{
		if ((*stack_a)->content > (*stack_a)->next->next->content)
			ra(stack_a);
		if ((*stack_a)->content > (*stack_a)->next->content)
			sa(stack_a);
	}
	else if ((*stack_a)->content > (*stack_a)->next->next->content)
		rra(stack_a);
	else
	{
		sa(stack_a);
		ra(stack_a);
	}
}

void	algorithm(t_list **stack_a)
{
	t_list	*stack_b;

	stack_b = NULL;
	if (ft_lstsize(*stack_a) == 2)
		two_elements(stack_a);
	if (ft_lstsize(*stack_a) == 3)
		three_elements(stack_a);
}



