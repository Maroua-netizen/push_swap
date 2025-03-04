/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Doubly_linked_lists.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:51:49 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/04 09:50:02 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init(t_stack **head, t_stack **tail, int value)
{
	t_stack	*new_t_stack;

	new_t_stack = malloc(sizeof(t_stack));
	if (!new_t_stack)
		return ;
	new_t_stack->n = value;
	new_t_stack->prev = NULL;
	new_t_stack->next = NULL;
	*head = new_t_stack;
	*tail = new_t_stack;
}

void	deallocate(t_stack **head, t_stack **tail)
{
	t_stack	*curr;

	curr = *head;
	while (curr->next)
	{
		curr = curr->next;
		free(curr->prev);
	}
	free(curr);
	*head = NULL;
	*tail = NULL;
}

void	insert_begin(t_stack **head, int value)
{
	t_stack	*new_t_stack;

	new_t_stack = malloc(sizeof(t_stack));
	if (!new_t_stack)
		return ;
	new_t_stack->prev = NULL;
	new_t_stack->n = value;
	new_t_stack->next = *head;
	(*head)->prev = new_t_stack;
	*head = new_t_stack;
}

void	insert_end(t_stack **tail, int value)
{
	t_stack	*new_t_stack;

	new_t_stack = malloc(sizeof(t_stack));
	if (!new_t_stack)
		return ;
	new_t_stack->n = value;
	new_t_stack->next = NULL;
	new_t_stack->prev = *tail;
	(*tail)->next = new_t_stack;
	*tail = new_t_stack;
}

void	insert_after(t_stack *node, int value)
{
	t_stack	*new_t_stack;

	new_t_stack = malloc(sizeof(t_stack));
	if (!new_t_stack)
		return ;
	new_t_stack->n = value;
	new_t_stack->prev = node;
	new_t_stack->next = node->next;
	if (node->next)
		node->next->prev = new_t_stack;
	node->next = new_t_stack;
}
