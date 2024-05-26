/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 11:35:20 by rpisoner          #+#    #+#             */
/*   Updated: 2024/05/26 11:38:06 by rpisoner         ###   ########.fr       */
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

void	free_stack_exit_error(t_list *stack)
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
	write(2, "Error\n", 6);
	exit(1);
}
