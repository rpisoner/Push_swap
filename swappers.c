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

	aux = 0;
	if (!(*a)->next)
		return ;
	aux = (*a)->content;
	(*a)->content = (*a)->next->content;
	(*a)->next->content = aux;
	write(1, "sa\n", 3);
}

void	sb(t_list **b)
{
	int	aux;

	aux = 0;
	if (!(*b)->next)
		return ;
	aux = (*b)->content;
	(*b)->content = (*b)->next->content;
	(*b)->next->content = aux;
	write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b)
{
	sa(a);
	sb(b);
	write(1, "ss\n", 3);
}
