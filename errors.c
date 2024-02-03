/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:05:09 by rpisoner          #+#    #+#             */
/*   Updated: 2024/02/03 13:45:12 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(void)
{
	write(1, "Error\n", 6);
	exit(0);
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

void	duplicated_numbers(char **arguments)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = 0;
	while (arguments[len])
		len++;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (ft_strcmp(arguments[i], arguments[j]) == 0)
				error_exit();
			j++;
		}
		i++;
	}
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
		if ((str[i][0] < '0' || str[i][0] > '9') && str[i][j++] != '-')
			if (str[i][0] != '+')
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
