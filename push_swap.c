/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:04:39 by rpisoner          #+#    #+#             */
/*   Updated: 2024/01/28 20:05:27 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	repeatednumbers(char **str)
// {
// 	while (str[i])
// 	{
// 		if (strncmp)
// 	}
// }

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
	t_list	*stack;
	int		i;

	if (check_errors(argv) == 0)
		return (write(1, "Error\n", 6) - 6);
	if (argc == 1)
		return (0);
	i = 1;
	stack = NULL;
	// stack = ft_atoi(argv[i++]);
	// while (i < argc)
	// {
	// 	stack->content = ft_atoi(argv[i]);
	// 	stack->next = ft_lstnew(argv[i]);
	// 	stack = stack->next;
	// 	i++;
	// }

	// stack = (t_list *)malloc(sizeof(t_list));
	// stack->content = 2;
	// stack->next = (t_list *)malloc(sizeof(t_list));
	// stack->next->content = 1;
	// stack->next->next = (t_list *)malloc(sizeof(t_list));
	// stack->next->next->content = 3;
	// stack->next->next->next = (t_list *)malloc(sizeof(t_list));
	// stack->next->next->next->content = 6;
	// stack->next->next->next->next = (t_list *)malloc(sizeof(t_list));
	// stack->next->next->next->next->content = 5;
	// stack->next->next->next->next->next = (t_list *)malloc(sizeof(t_list));
	// stack->next->next->next->next->next->content = 8;
	// stack->next->next->next->next->next->next = NULL;

	

	// t_list	*stack2 = NULL;

	// stack2->content = 0;
	// stack2->next->content = 3;
	// stack2->next->next = (t_list *)malloc(sizeof(t_list));
	// stack2->next->next->content = 2;
	// stack2->next->next->next = (t_list *)malloc(sizeof(t_list));
	// stack2->next->next->next->content = 1;
	// stack2->next->next->next->next = NULL;

	// printf("Stack A before:\n");
	// print_stack(stack);
	// printf("Stack B before:\n");
	// print_stack(stack2);

	// printf("\n");
	// sa(stack);
	// pb(&stack, &stack2);
	// pb(&stack, &stack2);
	// pb(&stack, &stack2);
	// rr(&stack, &stack2);
	// rrr(&stack, &stack2);
	// sa(stack);
	// pa(&stack, &stack2);
	// pa(&stack, &stack2);
	// pa(&stack, &stack2);

	// printf("\nStack A after:\n");
	// print_stack(stack);
	// printf("Stack B after:\n");
	// print_stack(stack2);
	// free(stack);
	// free(stack2);
	// atexit(leaks);
	return (0);
}
