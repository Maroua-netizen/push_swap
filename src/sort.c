/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:16:37 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/08 14:08:16 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void		sort_three(t_stack **a, t_stack **a_tail);
static void		sort_four(t_stack **a, t_stack **a_tail,
					t_stack **b, t_stack **b_tail);
static void		sort_five(t_stack **a, t_stack **a_tail,
					t_stack **b, t_stack **b_tail);

void	sort(t_stack **a, t_stack **a_tail, t_stack **b, t_stack **b_tail)
{
	int	size;

	size = ft_list_size(*a);
	if (size <= 3)
		sort_three(a, a_tail);
	else if (size == 4)
		sort_four(a, a_tail, b, b_tail);
	else if (size == 5)
		sort_five(a, a_tail, b, b_tail);
	else
		the_algo(a, a_tail, b, b_tail);
}

static void	sort_three(t_stack **a, t_stack **a_tail)
{
	if (*a == biggest_node(*a))
		ra(a, a_tail);
	else if ((*a)->next == biggest_node(*a))
		rra(a, a_tail);
	if ((*a)->n > (*a)->next->n)
		sa(a);
}

static void	sort_four(t_stack **a, t_stack **a_tail,
				t_stack **b, t_stack **b_tail)
{
	while (*a != smallest_node(*a))
		ra(a, a_tail);
	pb(a, a_tail, b, b_tail);
	sort_three(a, a_tail);
	pa(b, b_tail, a, a_tail);
}

static void	sort_five(t_stack **a, t_stack **a_tail,
					t_stack **b, t_stack **b_tail)
{
	while (*a != smallest_node(*a))
		ra(a, a_tail);
	pb(a, a_tail, b, b_tail);
	sort_four(a, a_tail, b, b_tail);
	pa(b, b_tail, a, a_tail);
}
