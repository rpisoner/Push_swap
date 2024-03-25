/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:47:14 by rpisoner          #+#    #+#             */
/*   Updated: 2024/03/25 18:02:01 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	biggest_pos(t_list **stack_a)
{
	t_list	*a;
	int		biggest_pos;

	a = *stack_a;
	biggest_pos = a->position;
	while (a)
	{
		if (a->position > biggest_pos)
			biggest_pos = a->position;
		a = a->next;
	}
	return (biggest_pos);
}

void	calc_best_pos(t_list **stack_a, t_list **stack_b)
{
	t_list	*a;
	int		soonest_pos;
	int		best_pos;

	a = *stack_a;
	soonest_pos = biggest_pos(stack_a);
	while (a)
	{
		if ((*stack_b)->position < a->position && soonest_pos > a->position)
		{
			soonest_pos = a->position;
			best_pos = a->new_pos;
		}
		a = a->next;
	}
	(*stack_b)->best_pos = best_pos;
}

void	set_best_pos(t_list **stack_a, t_list **stack_b)
{
	t_list	*b;

	b = *stack_b;
	while (b)
	{
		calc_best_pos(stack_a, &b);
		b = b->next;
	}
}

void	set_prices(t_list **stack_b, int a_size, int b_size)
{
	t_list	*b;

	b = *stack_b;
	while (b)
	{
		if ((b->new_pos + 1) <= (b_size / 2 + 1))
			b->price_b = b->new_pos;
		else
			b->price_b = b->new_pos - b_size;
		b = b->next;
	}
	b = *stack_b;
	while (b)
	{
		if ((b->best_pos + 1) <= (a_size / 2 + 1))
			b->price_a = b->best_pos;
		else
			b->price_a = b->best_pos - a_size;
		b = b->next;
	}
}
