/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:08:32 by rpisoner          #+#    #+#             */
/*   Updated: 2024/02/03 13:50:55 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			i;

	i = 0;
	if (len > ((unsigned int)ft_strlen(s)) - start)
		len = ((unsigned int)ft_strlen(s)) - start;
	if (start > ft_strlen(s))
		return ("");
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (0);
	while (i < len && *(s + i) != '\0')
	{
		*(substr + i) = *(s + start + i);
		i++;
	}
	*(substr + i) = '\0';
	return (substr);
}

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
