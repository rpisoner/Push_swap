/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:05:09 by rpisoner          #+#    #+#             */
/*   Updated: 2024/01/28 20:05:24 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_errors(char **str)
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
				return (0);
		while (str[i][j])
		{
			if ((str[i][j] < '0' || str[i][j] > '9') && str[i][j] != ' ')
				return (0);
			j++;
		}
		i++;
	}
	while (str[])
		return (0);
	return (1);
}