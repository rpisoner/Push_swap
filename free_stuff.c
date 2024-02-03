/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stuff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:03:21 by rpisoner          #+#    #+#             */
/*   Updated: 2024/02/03 14:05:50 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_list	**stack)
{
	t_list	*aux;

	while (*stack != NULL)
	{
		aux = (*stack)->next;
		if ((*stack) != NULL)
			free((*stack));
		stack = &aux;
	}
	aux = NULL;
}
