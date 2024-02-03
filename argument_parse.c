/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_parse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:17:09 by rpisoner          #+#    #+#             */
/*   Updated: 2024/02/03 13:52:05 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	nodes_connection(t_list **head, t_list **current, t_list *new_node)
{
	if (*head == NULL)
	{
		*head = new_node;
		*current = new_node;
	}
	else
	{
		(*current)->next = new_node;
		*current = new_node;
	}
}

t_list	*case2_argv(int argc, char *argv[])
{
	int		i;
	t_list	*head;
	t_list	*current;
	t_list	*new_node;

	i = 1;
	head = NULL;
	current = NULL;
	if (argc == 2)
		error_exit();
	duplicated_numbers(argv);
	while (i < argc)
	{
		new_node = ft_lstnew(ft_atoi(argv[i]));
		new_node->next = NULL;
		nodes_connection(&head, &current, new_node);
		i++;
	}
	return (head);
}

t_list	*case1_argv(char *argv[])
{
	char	**arguments;
	t_list	*head;
	t_list	*current;
	t_list	*new_node;
	size_t	i;

	arguments = ft_split(argv[1], ' ');
	if (!arguments)
		exit(0);
	exception_1num_space(arguments);
	duplicated_numbers(arguments);
	i = 0;
	head = NULL;
	current = NULL;
	while (arguments[i])
	{
		new_node = ft_lstnew(ft_atoi(arguments[i]));
		new_node->next = NULL;
		nodes_connection(&head, &current, new_node);
		i++;
	}
	return (head);
}

t_list	*argument_parse(int argc, char *argv[])
{
	t_list	*stack;
	size_t	j;

	j = 0;
	stack = NULL;
	while (argv[1][j])
	{
		if (argv[1][j] == ' ')
		{
			stack = case1_argv(argv);
			break ;
		}
		j++;
	}
	if (!argv[1][j])
		stack = case2_argv(argc, argv);
	return (stack);
}
