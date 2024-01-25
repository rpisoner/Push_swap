/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swappers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:07:01 by rpisoner          #+#    #+#             */
/*   Updated: 2024/01/25 17:15:50 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *a)
{
	int	aux;

	aux = 0;
	if (!a->next)
		return ;
	aux = a->content;
	a->content = a->next->content;
	a->next->content = aux;
}

void	sb(t_list *b)
{
	int	aux;

	aux = 0;
	if (!b->next)
		return ;
	aux = b->content;
	b->content = b->next->content;
	b->next->content = aux;
}

void	ss(t_list *a, t_list *b)
{
	sa(a);
	sb(b);
}
