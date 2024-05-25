/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:33:57 by rpisoner          #+#    #+#             */
/*   Updated: 2024/05/01 15:12:27 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc_bonus/push_swap_bonus.h"

int	main(int argc, char *argv[])
{
	t_list	*stack_a;

	(void)argc;
	stack_a = argument_parse(argv);
	if (!stack_a)
		exit(1);
	read_instructions(stack_a);
	if (is_organized(stack_a) == 0)
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
	exit(0);
}
