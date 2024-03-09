/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:05:09 by rpisoner          #+#    #+#             */
/*   Updated: 2024/02/10 16:48:36 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	exception_1num_space(char **arguments)
{
	size_t	i;

	i = 0;
	while (arguments[i])
		i++;
	if (i <= 1)
		error_exit();
}

void	comparison(int *numbers, size_t l)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < l)
	{
		j = i + 1;
		while (j < l)
		{
			if (numbers[i] == numbers[j])
				error_exit();
			j++;
		}
		i++;
	}
}

void	duplicated_nums(t_list *lst)
{
	t_list	*current;
	int		*numbers;
	size_t	i;

	i = 0;
	current = lst;
	numbers = (int *)malloc(ft_lstsize(lst) * sizeof(int));
	if (!numbers)
		error_exit();
	while (current != NULL)
	{
		numbers[i] = current->content;
		current = current->next;
		i++;
	}
	comparison(numbers, i);
	free(numbers);
	numbers = NULL;
}

void	check_errors(char **str)
{
	size_t	i;
	size_t	j;

	i = 1;
	j = 0;
	while (str[i])
	{
		j = 0;
		if ((str[i][0] < '0' || str[i][0] > '9') && str[i][j++] != '-'
		&& str[i][0] != '+')
			error_exit();
		while (str[i][j])
		{
			if ((str[i][j] < '0' || str[i][j] > '9') && str[i][j] != ' ')
				error_exit();
			j++;
		}
		i++;
	}
}
