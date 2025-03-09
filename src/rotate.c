/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 11:34:59 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/09 15:13:12 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	rotate(t_stack **head, t_stack **tail)
{
	if (ft_list_size(*head) < 2)
		return (false);
	insert_end(head, tail, (*head)->n, (*head)->position);
	remove_node(*head, head, tail);
	return (true);
}

void	ra(t_stack **a, t_stack **a_tail)
{
	if (rotate(a, a_tail))
		ft_printf("ra\n");
}

void	rb(t_stack **b, t_stack **b_tail)
{
	if (rotate(b, b_tail))
		ft_printf("rb\n");
}
