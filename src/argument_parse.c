/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_parse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:17:09 by rpisoner          #+#    #+#             */
/*   Updated: 2024/05/25 19:43:51 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

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

t_list	*argument_parse(char **argv)
{
	int		i;
	int		j;
	char	**no_spaces;
	t_list	*list_aux;
	t_list	*stack_a;

	i = 1;
	stack_a = NULL;
	input_error(argv);
	while (argv[i])
	{
		j = 0;
		no_spaces = ft_split(argv[i], ' ');
		while (no_spaces[j])
		{
			list_aux = ft_lstnew(ft_atoi(no_spaces[j]));
			ft_lstadd_back(&stack_a, list_aux);
			free(no_spaces[j]);
			j++;
		}
		free(no_spaces);
		i++;
	}
	duplicated_nums(stack_a);
	return (stack_a);
}
