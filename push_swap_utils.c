/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:15:57 by rpisoner          #+#    #+#             */
/*   Updated: 2024/02/03 13:00:39 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	size_t		i;
	long int	sign;
	long int	num;

	i = 0;
	sign = 1;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		num += (int)str[i] - '0';
		num *= 10;
		i++;
	}
	if (sign * (num / 10) > 2147483647 || sign * (num / 10) < -2147483648)
		error_exit();
	return (sign * (int)(num / 10));
}

static int	ft_wc(char const *s, char c)
{
	int		contador;
	size_t	i;

	i = 0;
	contador = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			contador++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (contador);
}

static char	*n_word(char const *s, char c, int i)
{
	char	*new;
	int		st;
	int		l;
	int		j;

	st = 0;
	l = 0;
	j = 0;
	while (s[l])
	{
		while (s[st] == c)
			st++;
		l = st;
		while (s[l] && s[l] != c)
			l++;
		if (i == j)
		{
			new = ft_substr(s, st, l - st);
			return (new);
		}
		j++;
		st = l;
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;

	strs = malloc((ft_wc(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	i = 0;
	while (ft_wc(s, c) > i)
	{
		strs[i] = n_word(s, c, i);
		if (strs[i] == NULL)
		{
			while (i-- > 0)
				free(strs[i]);
			free(strs);
			return (NULL);
		}
		i++;
	}
	strs[i] = NULL;
	return (strs);
}
