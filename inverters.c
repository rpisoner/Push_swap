/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inverters.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:06:43 by rpisoner          #+#    #+#             */
/*   Updated: 2024/01/25 17:20:43 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list *a)
{
	t_list	*copy;
	int		aux;
	int		last;

	if (!a->next)
		return ;
	copy = a;
	while (copy->next)
		copy = copy->next;
	last = copy->content;
	while (a->next)
	{

	}
}
