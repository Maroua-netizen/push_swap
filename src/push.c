/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:36:18 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/05 11:25:51 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_stack **head1, t_stack **tail1, t_stack **head2, t_stack **tail2)
{
	if (!(*head1))
		return ;
	if (!(*head2))
		init(head2, tail2, (*head1)->n, NULL);
	else
		insert_begin(head2, (*head1)->n);
	remove_node(*head1, head1, tail1);
}
