/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:16:37 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/07 13:59:37 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void		small_sort(t_stack **a, t_stack **a_tail);
static t_stack	*biggest_node(t_stack *head);

void	sort(t_stack **a, t_stack **a_tail, t_stack **b, t_stack **b_tail)
{
	if (ft_list_size(*a) <= 3)
		small_sort(a, a_tail);
	(void)a_tail;
	(void)b;
	(void)b_tail;
}

static void	small_sort(t_stack **a, t_stack **a_tail)
{
	if (*a == biggest_node(*a))
		ra(a, a_tail);
	else if ((*a)->next == biggest_node(*a))
		rra(a, a_tail);
	if ((*a)->n > (*a)->next->n)
		sa(a);
}

static t_stack	*biggest_node(t_stack *head)
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
