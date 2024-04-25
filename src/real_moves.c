/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:00:06 by rpisoner          #+#    #+#             */
/*   Updated: 2024/04/22 13:29:15 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	double_rotation(t_list **sa, t_list **sb, int *mov_a, int *mov_b)
{
	if ((*mov_a) > 0 && (*mov_b) > 0)
	{
		rr(sa, sb);
		(*mov_a)--;
		(*mov_b)--;
	}
	else if ((*mov_a) < 0 && (*mov_b) < 0)
	{
		rrr(sa, sb);
		(*mov_a)++;
		(*mov_b)++;
	}
}

void	rotations(t_list **sa, t_list **sb, int mov_a, int mov_b)
{
	while (mov_a != 0 || mov_b != 0)
	{
		if ((mov_a > 0 && mov_b > 0) || (mov_a < 0 && mov_b < 0))
			double_rotation(sa, sb, &mov_a, &mov_b);
		else if (mov_a < 0)
		{
			rra(sa);
			mov_a++;
		}
		else if (mov_b < 0)
		{
			rrb(sb);
			mov_b++;
		}
		else if (mov_a > 0)
		{
			ra(sa);
			mov_a--;
		}
		else if (mov_b > 0)
		{
			rb(sb);
			mov_b--;
		}
	}
}

void	real_moves(t_list **sa, t_list **sb, int *s_a, int *s_b)
{
	t_list	*b;
	t_list	*perfect_node;

	b = *sb;
	perfect_node = *sb;
	while (b)
	{
		if (abs(perfect_node->price_a) + abs(perfect_node->price_b)
			> abs(b->price_a) + abs(b->price_b))
			perfect_node = b;
		b = b->next;
	}
	rotations(sa, sb, perfect_node->price_a, perfect_node->price_b);
	pa(sa, sb);
	(*s_a)++;
	(*s_b)--;
}
