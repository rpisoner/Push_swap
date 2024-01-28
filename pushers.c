/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:07:33 by rpisoner          #+#    #+#             */
/*   Updated: 2024/01/28 16:27:07 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_list **a, t_list **b)
{
	t_list	*new;
	t_list	*temp;

	if (!b)
		return ;
	new = ft_lstnew((*a)->content);
	ft_lstadd_front(b, new);
	temp = *a;
	*a = (*a)->next;
	free(temp);
	write(1, "pb\n", 3);
}

void	pa(t_list **a, t_list **b)
{
	t_list	*new;
	t_list	*temp;

	if (!a)
		return ;
	new = ft_lstnew((*b)->content);
	ft_lstadd_front(a, new);
	temp = *b;
	*b = (*b)->next;
	free(temp);
	write(1, "pa\n", 3);
}
