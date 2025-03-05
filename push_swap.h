/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 18:22:50 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/05 11:29:34 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include <stdlib.h>

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

//Lists manipulation
void	init(t_stack **head, t_stack **tail, long value, char **strs);
void	insert_begin(t_stack **head, int value);
void	insert_end(t_stack **head, t_stack **tail, long value, char **strs);
t_stack	*find_node(t_stack *head, int value);
int		ft_list_size(t_stack *head);

//Instructions
void	push(t_stack **head1, t_stack **tail1, 
			t_stack **head2, t_stack **tail2);
void	swap(t_stack **a);

//Free
void	free_tab(char **tab);
void	free_list(t_stack **head, t_stack **tail);
void	remove_node(t_stack *node, t_stack **head, t_stack **tail);

#endif