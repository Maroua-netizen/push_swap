/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 11:41:57 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/09 15:13:10 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	reverse_rotate(t_stack **head, t_stack **tail)
{
	if (ft_list_size(*head) < 2)
		return (false);
	insert_begin(head, (*tail)->n, (*tail)->position);
	remove_node(*tail, head, tail);
	return (true);
}

void	rra(t_stack **a, t_stack **a_tail)
{
	if (reverse_rotate(a, a_tail))
		ft_printf("rra\n");
}

void	rrb(t_stack **b, t_stack **b_tail)
{
	if (reverse_rotate(b, b_tail))
		ft_printf("rrb\n");
}
