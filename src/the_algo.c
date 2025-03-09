/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:07:06 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/09 16:01:37 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void		push_range(t_stack **a, t_stack **a_tail,
					t_stack **b, t_stack **b_tail);
static void		push_back(t_stack **a, t_stack **a_tail,
					t_stack **b, t_stack **b_tail);
static int		biggest_position(t_stack *b);

void	the_algo(t_stack **a, t_stack **a_tail, t_stack **b, t_stack **b_tail)
{
	get_position(a);
	push_range(a, a_tail, b, b_tail);
	push_back(a, a_tail, b, b_tail);
}

static void	push_range(t_stack **a, t_stack **a_tail,
					t_stack **b, t_stack **b_tail)
{
	int	min;
	int	max;

	min = 1;
	max = 0.05 * ft_list_size(*a) + 10;
	while (*a)
	{
		if ((*a)->position >= min && (*a)->position <= max)
		{
			pb(a, a_tail, b, b_tail);
			min++;
			max++;
		}
		else if ((*a)->position < min)
		{
			pb(a, a_tail, b, b_tail);
			rb(b, b_tail);
			min++;
			max++;
		}
		else if ((*a)->position > max)
			ra(a, a_tail);
	}
}

static void	push_back(t_stack **a, t_stack **a_tail,
					t_stack **b, t_stack **b_tail)
{
	int	big_pos;
	int	rotations;

	while (*b)
	{
		big_pos = biggest_position(*b);
		if (big_pos <= ft_list_size(*b) / 2)
		{
			while (big_pos)
			{
				rb(b, b_tail);
				big_pos--;
			}
		}
		else
		{
			rotations = ft_list_size(*b) - big_pos;
			while (rotations)
			{
				rrb(b, b_tail);
				rotations--;
			}
		}
		pa(b, b_tail, a, a_tail);
	}
}

static int	biggest_position(t_stack *b)
{
	int		i;
	t_stack	*curr;

	curr = b;
	i = 0;
	while (curr)
	{
		if (curr == biggest_node(b))
			return (i);
		i++;
		curr = curr->next;
	}
	return (i);
}
