/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inverters.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:06:43 by rpisoner          #+#    #+#             */
/*   Updated: 2024/01/28 12:25:10 by rpisoner         ###   ########.fr       */
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
}

void	rrr(t_list **a, t_list **b)
{
	rra(a);
	rrb(b);
}
