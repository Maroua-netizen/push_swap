/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 09:37:21 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/07 12:47:10 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	swap(t_stack **head)
{
	t_stack	*first;
	t_stack	*second;

	if (ft_list_size(*head) < 2)
		return (false);
	first = *head;
	second = first->next;
	second->prev = NULL;
	first->prev = second;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->next = first;
	*head = second;
	return (true);
}

void	sa(t_stack **a)
{
	if (swap(a))
		ft_printf("sa\n");
}

void	sb(t_stack **b)
{
	if (swap(b))
		ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b)
{
	if (swap(a) && swap(b))
		ft_printf("ss\n");
	else if (swap(a) && !swap(b))
		ft_printf("sa\n");
	else if (!swap(a) && swap(b))
		ft_printf("sb\n");
}
