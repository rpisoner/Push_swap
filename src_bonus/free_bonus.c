/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 11:35:20 by rpisoner          #+#    #+#             */
/*   Updated: 2024/06/16 14:57:43 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc_bonus/push_swap_bonus.h"

void	free_stack(t_list *stack)
{
	t_list	*aux;
	t_list	*aux2;

	aux = stack;
	aux2 = stack;
	while (aux)
	{
		aux2 = aux->next;
		free(aux);
		aux = aux2;
	}
}
