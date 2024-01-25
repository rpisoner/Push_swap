/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:07:33 by rpisoner          #+#    #+#             */
/*   Updated: 2024/01/25 17:10:49 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_list **a, t_list **b)
{
	t_list	*temp;

	if (!b)
		return ;
	temp = (*b)->next;
	(*b)->next = *a;
	*a = temp;
}

void	pa(t_list **a, t_list **b)
{
	t_list	*temp;

	if (!a)
		return ;
	temp = (*a)->next;
	(*a)->next = *b;
	*b = temp;
}
