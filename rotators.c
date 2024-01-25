/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotators.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:06:55 by rpisoner          #+#    #+#             */
/*   Updated: 2024/01/25 17:15:18 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list *a)
{
	int	first;

	if (!a->next)
		return ;
	first = a->content;
	while (a->next)
	{
		a->content = a->next->content;
		a = a->next;
	}
	a->content = first;
}

void	rb(t_list *b)
{
	int	first;

	if (!b->next)
		return ;
	first = b->content;
	while (b->next)
	{
		b->content = b->next->content;
		b = b->next;
	}
	b->content = first;
}

void	rr(t_list *a, t_list *b)
{
	ra(a);
	rb(b);
}
