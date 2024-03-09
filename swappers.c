/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swappers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:07:01 by rpisoner          #+#    #+#             */
/*   Updated: 2024/02/10 15:40:07 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **a)
{
	int	aux;
	int	pos_aux;

	aux = 0;
	if (!(*a)->next)
		return ;
	aux = (*a)->content;
	pos_aux = (*a)->position;
	(*a)->content = (*a)->next->content;
	(*a)->position = (*a)->next->position;
	(*a)->next->content = aux;
	(*a)->next->position = pos_aux;
	write(1, "sa\n", 3);
}

void	sb(t_list **b)
{
	int	aux;
	int	pos_aux;

	aux = 0;
	if (!(*b)->next)
		return ;
	aux = (*b)->content;
	pos_aux = (*b)->position;
	(*b)->content = (*b)->next->content;
	(*b)->position = (*b)->next->position;
	(*b)->next->content = aux;
	(*b)->next->position = pos_aux;
	write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b)
{
	sa(a);
	sb(b);
	write(1, "ss\n", 3);
}
