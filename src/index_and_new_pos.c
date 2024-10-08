/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_and_new_pos.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:20:27 by rpisoner          #+#    #+#             */
/*   Updated: 2024/04/22 13:28:57 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	initialize_index(t_list **stack_a)
{
	t_list	*copy;

	copy = *stack_a;
	while (copy != NULL)
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
	initialize_index(stack_a);
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

void	calculate_new_positions(t_list **stack)
{
	t_list	*copy;
	size_t	new_pos;

	copy = *stack;
	new_pos = 0;
	while (copy != NULL)
	{
		copy->new_pos = new_pos++;
		copy = copy->next;
	}
}

int	abs(int value)
{
	if (value < 0)
		return (value * -1);
	return (value);
}
