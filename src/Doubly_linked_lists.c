/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Doubly_linked_lists.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:51:49 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/04 20:11:42 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init(t_stack **head, t_stack **tail, long value, char **strs)
{
	t_stack	*new_node;

	if (value > INT_MAX || value < INT_MIN)
	{
		free_tab(strs);
		ft_printf("Error\n");
		exit(4);
	}
	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return ;
	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = NULL;
	*head = new_node;
	*tail = new_node;
}

void	insert_end(t_stack **head, t_stack **tail, long value, char **strs)
{
	t_stack	*new_node;

	if (value > INT_MAX || value < INT_MIN)
	{
		free_tab(strs);
		deallocate(head, tail);
		ft_printf("Error\n");
		exit(5);
	}
	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return ;
	new_node->n = value;
	new_node->next = NULL;
	new_node->prev = *tail;
	(*tail)->next = new_node;
	*tail = new_node;
}

t_stack	*find_node(t_stack *head, int value)
{
	t_stack	*curr;

	curr = head;
	while (curr)
	{
		if (curr->n == value)
			return (curr);
		curr = curr->next;
	}
	return (NULL);
}

void	deallocate(t_stack **head, t_stack **tail)
{
	t_stack	*curr;

	if (!head && !tail)
		return ;
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
