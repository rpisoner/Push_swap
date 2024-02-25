/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:20:27 by rpisoner          #+#    #+#             */
/*   Updated: 2024/02/24 17:01:43 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	inicialize_index(t_list **stack_a)
{
	t_list	*copy;

	copy = *stack_a;
	while (copy->next != NULL)
	{
		copy->position = 0;
		copy = copy->next;
	}
}

void	assign_index(t_list **stack_a)
{
	size_t	i;
	t_list	*current_index;
	t_list	*copy;
	t_list	*move;

	i = 1;
	move = *stack_a;
	inicialize_index(stack_a);
	while (i <= (size_t)ft_lstsize(*stack_a))
	{
		copy = move;
		current_index = move;
		while (copy != NULL)
		{
			if (current_index->content > copy->content && copy->position == 0)
				current_index = copy;
			copy = copy->next;
		}
		current_index->position = i;
		while ((current_index == move || move->position != 0) && move->next != NULL)
			move = move->next;
		i++;
	}
}
