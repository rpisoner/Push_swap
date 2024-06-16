/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <rpisoner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:35:36 by rpisoner          #+#    #+#             */
/*   Updated: 2024/06/16 14:57:57 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H
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

//ERRORS
void	error_exit(void);
void	duplicated_nums(t_list *lst);
void	input_error(char **argv);
//FREE
void	free_stack(t_list *stack);
//UTILS
t_list	*argument_parse(char **argv);
void	read_instructions(t_list *stack_a);
//ARGUMENT PARSE
int		is_organized(t_list *list);
//LINKED LISTS FUNCTIONS
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
//PUSH_SWAP_UTILS
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
//PUSH_SWAP_UTILS2
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
int		ft_strcmp(const char *s1, const char *s2);
//INSTRUCTIONS
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
#endif