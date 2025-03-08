/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_position.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 12:06:36 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/08 14:33:32 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static t_stack	*next_smallest(t_stack *a, t_stack *previous_smallest);

void	get_position(t_stack **a)
{
	int		position;
	t_stack	*next;

	position = 1;
	next = smallest_node(*a);
	while (position <= ft_list_size(*a))
	{
		next->position = position++;
		next = next_smallest(*a, next);
	}
}

static t_stack	*next_smallest(t_stack *a, t_stack *previous_smallest)
{
	t_stack	*curr;
	t_stack	*next_smallest;

	curr = a;
	next_smallest = NULL;
	while (curr)
	{
		if ((next_smallest == NULL || curr->n < next_smallest->n)
			&& curr->n > previous_smallest->n)
			next_smallest = curr;
		curr = curr->next;
	}
	return (next_smallest);
}
