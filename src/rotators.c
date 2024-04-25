/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotators.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:06:55 by rpisoner          #+#    #+#             */
/*   Updated: 2024/04/22 13:29:19 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ra(t_list **a)
{
	t_list	*last;

	last = *a;
	while (last->next)
		last = last->next;
	last->next = (*a);
	*a = (*a)->next;
	last->next->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_list **b)
{
	t_list	*last;

	last = *b;
	while (last->next)
		last = last->next;
	last->next = (*b);
	*b = (*b)->next;
	last->next->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b)
{
	t_list	*last;

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
	write(1, "rr\n", 3);
}
