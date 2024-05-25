/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 19:08:05 by rpisoner          #+#    #+#             */
/*   Updated: 2024/05/25 20:51:44 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

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
