/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:07:33 by rpisoner          #+#    #+#             */
/*   Updated: 2024/04/22 13:29:13 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	pb(t_list **a, t_list **b)
{
	t_list	*aux;

	aux = *a;
	*a = aux->next;
	aux->next = *b;
	*b = aux;
	write(1, "pb\n", 3);
}

void	pa(t_list **a, t_list **b)
{
	t_list	*aux;

	aux = *b;
	*b = aux->next;
	aux->next = *a;
	*a = aux;
	write(1, "pa\n", 3);
}
