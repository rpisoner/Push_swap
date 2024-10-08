/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:04:39 by rpisoner          #+#    #+#             */
/*   Updated: 2024/05/29 11:38:28 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*stack_a;

	if (argc == 1)
		exit(1);
	stack_a = argument_parse(argv);
	if (stack_a == NULL || is_organized(stack_a) == 1)
	{
		free_stack(stack_a);
		exit(1);
	}
	algorithm(&stack_a);
	free_stack(stack_a);
	exit(0);
}
