/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:59:49 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/05 19:20:59 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	is_sorted(t_stack *a, t_stack *a_tail)
{
	t_stack	*curr;

	curr = a;
	while (curr->next && curr->n < curr->next->n)
		curr = curr->next;
	if (curr == a_tail)
	{
		free_list(&a, &a_tail);
		exit(0);
	}
}
