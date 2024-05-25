/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:08:32 by rpisoner          #+#    #+#             */
/*   Updated: 2024/05/01 14:57:22 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc_bonus/push_swap_bonus.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (s1[i] && s2[i])
	{
		if (*(str1 + i) > *(str2 + i))
			return ((int)*(str1 + i) - (int)*(str2 + i));
		else if (*(str1 + i) < *(str2 + i))
			return ((int)*(str1 + i) - (int)*(str2 + i));
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s1[i] == '\0')
		return (-(int)s2[i]);
	else
		return ((int)s1[i] - (int)s2[i]);
}
