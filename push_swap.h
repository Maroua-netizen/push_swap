/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 18:22:50 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/04 11:39:18 by mmounsif         ###   ########.fr       */
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

//Libft functions
char	**ft_split(char const *s, char c);
void	*ft_calloc(size_t count, size_t size);
int		ft_isdigit(int c);
long	ft_atol(const char *str);

//Linked lists functions
void	init(t_stack **head, t_stack **tail, int value);
void	insert_end(t_stack **tail, int value);
t_stack	*find_node(t_stack *head, int value);
void	deallocate(t_stack **head, t_stack **tail);

//Other functions
void	free_tab(char **tab);

#endif