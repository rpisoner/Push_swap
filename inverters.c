/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inverters.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:06:43 by rpisoner          #+#    #+#             */
/*   Updated: 2024/02/10 15:39:18 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **a)
{
	t_list	*first;
	t_list	*penultimate;

	if (!(*a)->next)
		return ;
	first = *a;
	penultimate = *a;
	while ((*a)->next)
		(*a) = (*a)->next;
	while (penultimate->next->next)
		penultimate = penultimate->next;
	penultimate->next = NULL;
	(*a)->next = first;
	write(1, "rra\n", 4);
}

void	rrb(t_list **b)
{
	t_list	*first;
	t_list	*penultimate;

	if (!(*b)->next)
		return ;
	first = *b;
	penultimate = *b;
	while ((*b)->next)
		(*b) = (*b)->next;
	while (penultimate->next->next)
		penultimate = penultimate->next;
	penultimate->next = NULL;
	(*b)->next = first;
	write(1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b)
{
	rra(a);
	rrb(b);
}
