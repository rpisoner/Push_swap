/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushers_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:07:33 by rpisoner          #+#    #+#             */
/*   Updated: 2024/05/01 14:08:11 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc_bonus/push_swap_bonus.h"

void	pb(t_list **a, t_list **b)
{
	t_list	*aux;

	if (!(*a))
		return ;
	aux = *a;
	*a = aux->next;
	aux->next = *b;
	*b = aux;
}

void	pa(t_list **a, t_list **b)
{
	t_list	*aux;

	if (!(*b))
		return ;
	aux = *b;
	*b = aux->next;
	aux->next = *a;
	*a = aux;
}
