/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpisoner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:03:59 by rpisoner          #+#    #+#             */
/*   Updated: 2024/02/24 17:02:26 by rpisoner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				content;
	size_t			position;
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
//ALGORITHM
void	algorithm(t_list **stack_a);
//Algorithm 2
void	assign_index(t_list **stack_a);
void	inicialize_index(t_list **stack_a);
//BORRAR
void	free_stack(t_list	**stack);

void	print_stack(t_list *stack);

#endif
