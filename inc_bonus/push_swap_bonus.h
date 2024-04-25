/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:35:36 by rpisoner          #+#    #+#             */
/*   Updated: 2024/04/24 10:18:11 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS
# define PUSH_SWAP_BONUS	
# include "get_next_line_bonus.h"

typedef struct s_list
{
	int				content;
	int				position;
	int				new_pos;
	int				best_pos;
	int				price_a;
	int				price_b;
	struct s_list	*next;
}	t_list;

char	*ft_strchr(const char *s, int c);

#endif