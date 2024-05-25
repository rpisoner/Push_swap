/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swappers_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:07:01 by rpisoner          #+#    #+#             */
/*   Updated: 2024/05/01 15:56:46 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc_bonus/push_swap_bonus.h"

void	sa(t_list **a)
{
	int	aux;
	int	pos_aux;

	aux = 0;
	if (!(*a))
		return ;
	if (!(*a)->next)
		return ;
	aux = (*a)->content;
	pos_aux = (*a)->position;
	(*a)->content = (*a)->next->content;
	(*a)->position = (*a)->next->position;
	(*a)->next->content = aux;
	(*a)->next->position = pos_aux;
}

void	sb(t_list **b)
{
	int	aux;
	int	pos_aux;

	if (!(*b))
		return ;
	if (!(*b)->next)
		return ;
	aux = 0;
	aux = (*b)->content;
	pos_aux = (*b)->position;
	(*b)->content = (*b)->next->content;
	(*b)->position = (*b)->next->position;
	(*b)->next->content = aux;
	(*b)->next->position = pos_aux;
}

void	ss(t_list **a, t_list **b)
{
	sa(a);
	sb(b);
}
