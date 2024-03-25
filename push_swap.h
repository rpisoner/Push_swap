/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:03:59 by rpisoner          #+#    #+#             */
/*   Updated: 2024/03/25 18:08:14 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>

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

//RULES
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
//LINKED LISTS FUNCTIONS
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
//PUSH_SWAP_UTILS
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
//PUSH_SWAP_UTILS2
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
int		ft_strcmp(const char *s1, const char *s2);
//ERRORS
void	check_errors(char **str);
void	error_exit(void);
void	exception_1num_space(char **arguments);
void	duplicated_nums(t_list *lst);
//PARSE
t_list	*argument_parse(int argc, char *argv[]);
int		is_organized(t_list *lst);
//TWO_AND_THREE_ELEMENTS
void	two_elements(t_list **stack, int n_stack);
void	three_elements(t_list **stack, int n);
//ALGORITHM
void	algorithm(t_list **stack_a);
//INDEX_AND_NEW_POS
void	assign_index(t_list **stack_a);
void	inicialize_index(t_list **stack_a);
void	calculate_new_positions(t_list **stack_b);
int		abs(int value);
//PRICES_AND_POSITIONS
void	set_prices(t_list **stack_b, int a_size, int b_size);
void	set_best_pos(t_list **stack_a, t_list **stack_b);
//REAL_MOVES
void	real_moves(t_list **sa, t_list **sb, int *s_a, int *s_b);
//LAST_MOVES
void	last_moves(t_list **stack_a, int a_size);

#endif
