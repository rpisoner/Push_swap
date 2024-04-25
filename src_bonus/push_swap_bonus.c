/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:33:57 by rpisoner          #+#    #+#             */
/*   Updated: 2024/04/24 09:33:32 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc_bonus/push_swap_bonus.h"
#include <stdio.h>

int	main(void)
{
	char	*aux;

	aux = get_next_line(0);
	if (aux == NULL)
		return 1;
	printf("Input: %s", aux);
	while (aux != NULL && *aux != 'F')
	{
		free(aux);
		aux = get_next_line(0);
		if (aux != NULL)
			printf("Input: %s", aux);
	}
	free(aux);
	aux = NULL;
	exit(0);
}