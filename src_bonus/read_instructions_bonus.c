/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_instructions_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:01:15 by rpisoner          #+#    #+#             */
/*   Updated: 2024/06/16 15:28:02 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc_bonus/push_swap_bonus.h"

void	execute_instruction(char *instruct, t_list **stack_a, t_list **stack_b)
{
	if (ft_strcmp(instruct, "sa\n") == 0)
		sa(stack_a);
	else if (ft_strcmp(instruct, "sb\n") == 0)
		sb(stack_b);
	else if (ft_strcmp(instruct, "ss\n") == 0)
		ss(stack_a, stack_b);
	else if (ft_strcmp(instruct, "ra\n") == 0)
		ra(stack_a);
	else if (ft_strcmp(instruct, "rb\n") == 0)
		rb(stack_b);
	else if (ft_strcmp(instruct, "rr\n") == 0)
		rr(stack_a, stack_b);
	else if (ft_strcmp(instruct, "pa\n") == 0)
		pa(stack_a, stack_b);
	else if (ft_strcmp(instruct, "pb\n") == 0)
		pb(stack_a, stack_b);
	else if (ft_strcmp(instruct, "rrr\n") == 0)
		rrr(stack_a, stack_b);
	else if (ft_strcmp(instruct, "rra\n") == 0)
		rra(stack_a);
	else if (ft_strcmp(instruct, "rrb\n") == 0)
		rrb(stack_b);
	else
		error_exit();
}

void	read_instructions(t_list *stack_a)
{
	char	*instruction;
	t_list	*stack_b;

	stack_b = NULL;
	instruction = get_next_line(0);
	if (instruction)
		execute_instruction(instruction, &stack_a, &stack_b);
	while (instruction != NULL)
	{
		free(instruction);
		instruction = get_next_line(0);
		if (instruction)
			execute_instruction(instruction, &stack_a, &stack_b);
	}
	free(instruction);
	instruction = NULL;
	if (ft_lstsize(stack_b) != 0)
	{
		free_stack(stack_a);
		free_stack(stack_b);
		write(1, "KO\n", 2);
		exit(0);
	}
}
