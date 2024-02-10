/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:04:39 by rpisoner          #+#    #+#             */
/*   Updated: 2024/02/10 18:31:49 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list *stack)
{
	while (stack != NULL)
	{
		printf("%d -> ", (int)stack->content);
		stack = stack->next;
	}
	printf("NULL\n");
}

void	leaks(void)
{
	system("leaks push_swap");
}

int	main(int argc, char *argv[])
{
	t_list	*stack_a;

	check_errors(argv);
	stack_a = argument_parse(argc, argv);
	// atexit(leaks);
	if (argc == 1 || stack_a == NULL || is_organized(stack_a) == 1)
		exit (0);
	algorithm(&stack_a);
	printf("After:\n");
	print_stack(stack_a);
	exit (0);
}
