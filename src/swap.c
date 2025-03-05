/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 09:37:21 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/05 10:30:52 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_stack **a)
{
	t_stack	*first;
	t_stack	*second;

	if (ft_list_size(*a) < 2)
		return ;
	first = *a;
	second = first->next;
	second->prev = NULL;
	first->prev = second;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->next = first;
	*a = second;
}
