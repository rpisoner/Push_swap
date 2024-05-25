/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotators_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:06:55 by rpisoner          #+#    #+#             */
/*   Updated: 2024/05/01 14:07:59 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc_bonus/push_swap_bonus.h"

void	ra(t_list **a)
{
	t_list	*last;

	if (!(*a))
		return ;
	last = *a;
	while (last->next)
		last = last->next;
	last->next = (*a);
	*a = (*a)->next;
	last->next->next = NULL;
}

void	rb(t_list **b)
{
	t_list	*last;

	if (!(*b))
		return ;
	last = *b;
	while (last->next)
		last = last->next;
	last->next = (*b);
	*b = (*b)->next;
	last->next->next = NULL;
}

void	rr(t_list **a, t_list **b)
{
	t_list	*last;

	if (!(*b) || !(*a))
		return ;
	last = *a;
	while (last->next)
		last = last->next;
	last->next = (*a);
	*a = (*a)->next;
	last->next->next = NULL;
	last = *b;
	while (last->next)
		last = last->next;
	last->next = (*b);
	*b = (*b)->next;
	last->next->next = NULL;
}
