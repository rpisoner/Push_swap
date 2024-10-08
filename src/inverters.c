/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inverters.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:06:43 by rpisoner          #+#    #+#             */
/*   Updated: 2024/04/22 13:28:58 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rra(t_list **a)
{
	t_list	*first;
	t_list	*penultimate;

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
	t_list	*first;
	t_list	*penultimate;

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
	write(1, "rrr\n", 4);
}
