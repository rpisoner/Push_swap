/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:05:09 by rpisoner          #+#    #+#             */
/*   Updated: 2024/05/26 11:44:17 by rpisoner         ###   ########.fr       */
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

void	input_error(char **argv)
{
	size_t	i;
	size_t	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] < '0' || argv[i][j] > '9')
				&& (argv[i][j] != '+' && argv[i][j] != '-'
				&& argv[i][j] != ' '))
				error_exit();
			if (argv[i][j] == '+' || argv[i][j] == '-')
			{
				if (!argv[i][j + 1])
					error_exit();
				if ((argv[i][j + 1] < '0' || argv[i][j + 1] > '9')
					|| (argv[i][j - 1] >= '0' && argv[i][j - 1] <= '9'))
					error_exit();
			}
			j++;
		}
		i++;
	}
}