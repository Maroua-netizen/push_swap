/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:36:18 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/07 16:36:29 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	push(t_stack **head1, t_stack **tail1,
			t_stack **head2, t_stack **tail2)
{
	if (!(*head1))
		return (false);
	if (!(*head2))
		init(head2, tail2, (*head1)->n, NULL);
	else
		insert_begin(head2, (*head1)->n);
	remove_node(*head1, head1, tail1);
	return (true);
}

void	pa(t_stack **b, t_stack **b_tail, t_stack **a, t_stack **a_tail)
{
	if (push(b, b_tail, a, a_tail))
		ft_printf("pa\n");
}

void	pb(t_stack **a, t_stack **a_tail, t_stack **b, t_stack **b_tail)
{
	if (push(a, a_tail, b, b_tail))
		ft_printf("pb\n");
}
