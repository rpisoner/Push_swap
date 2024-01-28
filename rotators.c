/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotators.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:06:55 by rpisoner          #+#    #+#             */
/*   Updated: 2024/01/28 16:34:22 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **a)
{
	t_list	*last;

	last = *a;
	if (!a || !*a || !(*a)->next)
		return ;
	while (last->next)
		last = last -> next;
	last->next = (*a);
	*a = (*a)->next;
	last->next->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_list **b)
{
	t_list	*last;

	last = *b;
	if (!b || !(*b) || !(*b)->next)
		return ;
	while (last->next)
		last = last -> next;
	last->next = (*b);
	*b = (*b)->next;
	last->next->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b)
{
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}
