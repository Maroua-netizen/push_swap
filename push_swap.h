/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 18:22:50 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/08 11:52:08 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include <stdlib.h>
# include <stdbool.h>

typedef struct s_stack {
	int				n;
	struct s_stack	*prev;
	struct s_stack	*next;
}					t_stack;

//Libft
char	**ft_split(char const *s, char c);
void	*ft_calloc(size_t count, size_t size);
int		ft_isdigit(int c);
long	ft_atol(const char *str);

//Checks
void	null_check(char **av);
void	error_check(char **av);
void	double_check(t_stack **a, t_stack **a_tail);
bool	is_sorted(t_stack *a, t_stack *a_tail);

//Lists manipulation
void	init(t_stack **head, t_stack **tail, long value, char **strs);
void	insert_begin(t_stack **head, int value);
void	insert_end(t_stack **head, t_stack **tail, long value, char **strs);
t_stack	*find_node(t_stack *head, int value);
int		ft_list_size(t_stack *head);
t_stack	*biggest_node(t_stack *head);
t_stack	*smallest_node(t_stack *head);

//Instructions
bool	push(t_stack **head1, t_stack **tail1, 
			t_stack **head2, t_stack **tail2);
void	pa(t_stack **b, t_stack **b_tail, t_stack **a, t_stack **a_tail);
void	pb(t_stack **a, t_stack **a_tail, t_stack **b, t_stack **b_tail);

bool	swap(t_stack **a);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);

bool	rotate(t_stack **head, t_stack **tail);
void	ra(t_stack **a, t_stack **a_tail);
void	rb(t_stack **b, t_stack **b_tail);
void	rr(t_stack **a, t_stack **a_tail, t_stack **b, t_stack **b_tail);

bool	reverse_rotate(t_stack **head, t_stack **tail);
void	rra(t_stack **a, t_stack **a_tail);
void	rrb(t_stack **b, t_stack **b_tail);
void	rrr(t_stack **a, t_stack **a_tail, t_stack **b, t_stack **b_tail);

//Sorting
void	sort(t_stack **a, t_stack **a_tail, t_stack **b, t_stack **b_tail);

//Free
void	free_matrix(char **matrix);
void	free_list(t_stack **head, t_stack **tail);
void	remove_node(t_stack *node, t_stack **head, t_stack **tail);

#endif