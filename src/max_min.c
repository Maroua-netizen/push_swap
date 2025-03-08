/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 11:50:50 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/08 14:17:31 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*biggest_node(t_stack *head)
{
	t_stack	*curr;
	t_stack	*biggest;

	curr = head;
	biggest = curr;
	while (curr)
	{
		if (curr->n > biggest->n)
			biggest = curr;
		curr = curr->next;
	}
	return (biggest);
}

t_stack	*smallest_node(t_stack *head)
{
	t_stack	*curr;
	t_stack	*smallest;

	curr = head;
	smallest = curr;
	while (curr)
	{
		if (curr->n < smallest->n)
			smallest = curr;
		curr = curr->next;
	}
	return (smallest);
}
