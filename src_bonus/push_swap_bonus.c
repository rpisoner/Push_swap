/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:33:57 by rpisoner          #+#    #+#             */
/*   Updated: 2024/06/16 17:53:38 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc_bonus/push_swap_bonus.h"

int	main(int argc, char *argv[])
{
	t_list	*stack_a;

	if (argc == 1)
		exit(1);
	stack_a = argument_parse(argv);
	if (!stack_a)
	{
		free_stack(stack_a);
		exit(1);
	}
	read_instructions(&stack_a);
	if (is_organized(stack_a) == 0)
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
	free_stack(stack_a);
	exit(0);
}
