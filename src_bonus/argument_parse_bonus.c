/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_parse_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:42:45 by rpisoner          #+#    #+#             */
/*   Updated: 2024/04/24 10:20:10 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc_bonus/push_swap_bonus.h"

int	is_organized(t_list *list)
{
	t_list	*lst;

	lst = list;
	while (lst->next != NULL)
	{
		if (lst->content < lst->next->content)
			lst = lst->next;
		else
			return (0);
	}
	return (1);
}

t_list *case2_argv(int argc, char *argv[]) {
    int i = 1;
    t_list *head = NULL, *current = NULL;

    if (argc < 2)
        error_exit();
    while (i < argc) {
        t_list *new_node = ft_lstnew(ft_atoi(argv[i]));
        new_node->next = NULL;
        nodes_connection(&head, &current, new_node);
        i++;
    }
    duplicated_nums(head);
    return head;
}

t_list *case1_argv(char *argv[]) {
    char **arguments = ft_split(argv[1], ' ');
    if (!arguments)
        exit(0);

    exception_1num_space(arguments); 
    size_t i = 0;
    t_list *head = NULL, *current = NULL;

    while (arguments[i]) {
        t_list *new_node = ft_lstnew(ft_atoi(arguments[i]));
        new_node->next = NULL;	
        nodes_connection(&head, &current, new_node);
        i++;
    }

    i = 0;
    while (arguments[i])
        free(arguments[i++]);
    free(arguments);
    duplicated_nums(head);
    return head;
}

t_list *argument_parse(int argc, char *argv[]) {
    t_list *stack = NULL;
    if (argc == 1 || (argc == 2 && argv[1][0] == '\0'))
        return NULL;
    return stack;
}

t_list	*argument_parse(int argc, char *argv[])
{
	t_list	*stack;
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	stack = NULL;
	while (argv[i][j])
	{
		if (ft_strchr(argv[i], ' ') != NULL)
			stack = case1_argv(argv);
		else
			stack = case2_argv(argc, argv);
		j++;
	}
	return (stack);
}