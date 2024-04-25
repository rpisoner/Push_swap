/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:04:39 by rpisoner          #+#    #+#             */
/*   Updated: 2024/04/22 13:29:11 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*stack_a;

	check_errors(argv);
	if (argc == 1)
		exit (0);
	stack_a = argument_parse(argc, argv);
	if (stack_a == NULL || is_organized(stack_a) == 1)
		exit (0);
	algorithm(&stack_a);
	exit(0);
}
