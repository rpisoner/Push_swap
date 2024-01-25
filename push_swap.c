/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:04:39 by rpisoner          #+#    #+#             */
/*   Updated: 2024/01/25 17:10:43 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	main(int argc, char *argv[])
// {
// 	//funcion que checkea los errores
// 	t_list	a;

// 	a.content=[]
// 	int	bs;
// 	bs = argc;
// 	printf("%s", argv[0]);
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

int main()
{
	t_list	*stack = NULL;

	stack = (t_list *)malloc(sizeof(t_list));
	stack->content = 1;
	stack->next = (t_list *)malloc(sizeof(t_list));
	stack->next->content = 2;
	stack->next->next = (t_list *)malloc(sizeof(t_list));
	stack->next->next->content = 3;
	stack->next->next->next = (t_list *)malloc(sizeof(t_list));
	stack->next->next->next->content = 4;
	stack->next->next->next->next = NULL;

	t_list	*stack2 = NULL;

	stack2 = (t_list *)malloc(sizeof(t_list));
	stack2->content = 4;
	stack2->next = (t_list *)malloc(sizeof(t_list));
	stack2->next->content = 3;
	stack2->next->next = (t_list *)malloc(sizeof(t_list));
	stack2->next->next->content = 2;
	stack2->next->next->next = (t_list *)malloc(sizeof(t_list));
	stack2->next->next->next->content = 1;
	stack2->next->next->next->next = NULL;

	printf("Stack A before:\n");
	print_stack(stack);
	printf("Stack B before:\n");
	print_stack(stack2);

	pb(&stack, &stack2);

	printf("Stack A after:\n");
	print_stack(stack);
	printf("Stack B after:\n");
	print_stack(stack2);
	free(stack);
	free(stack2);
	return (0);
}
