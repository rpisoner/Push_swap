/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:05:09 by rpisoner          #+#    #+#             */
/*   Updated: 2024/05/01 14:35:48 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc_bonus/push_swap_bonus.h"

void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
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

void	input_error(char *input)
{
	size_t	i;

	i = 0;
	while (input[i])
	{
		if ((input[i] < '0' || input[i] > '9')
			&& (input[i] != '+' && input[i] != '-'))
			error_exit();
		if (input[i] == '+' || input[i] == '-')
		{
			if (!input[i + 1])
				error_exit();
			if (input[i + 1] < '0' || input[i + 1] > '9')
				error_exit();
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
