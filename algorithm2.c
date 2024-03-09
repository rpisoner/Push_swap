/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:20:27 by rpisoner          #+#    #+#             */
/*   Updated: 2024/02/27 16:59:40 by rpisoner         ###   ########.fr       */
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
	t_list	*m;

	i = 1;
	m = *stack_a;
	inicialize_index(stack_a);
	while (i <= (size_t)ft_lstsize(*stack_a))
	{
		copy = m;
		current_index = m;
		while (copy != NULL)
		{
			if (copy->position == 0 && current_index->content > copy->content)
				current_index = copy;
			copy = copy->next;
		}
		current_index->position = i;
		while (m->next != NULL && (current_index == m || m->position != 0))
			m = m->next;
		i++;
	}
}
