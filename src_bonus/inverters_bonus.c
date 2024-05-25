/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inverters.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:06:43 by rpisoner          #+#    #+#             */
/*   Updated: 2024/05/01 14:08:27 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc_bonus/push_swap_bonus.h"

void	rra(t_list **a)
{
	t_list	*first;
	t_list	*penultimate;

	if (!(*a))
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

	if (!(*b))
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
	t_list	*first;
	t_list	*penultimate;

	if (!(*a) || !(*b))
		return ;
	first = *a;
	penultimate = *a;
	while ((*a)->next)
		(*a) = (*a)->next;
	while (penultimate->next->next)
		penultimate = penultimate->next;
	penultimate->next = NULL;
	(*a)->next = first;
	first = *b;
	penultimate = *b;
	while ((*b)->next)
		(*b) = (*b)->next;
	while (penultimate->next->next)
		penultimate = penultimate->next;
	penultimate->next = NULL;
	(*b)->next = first;
}
