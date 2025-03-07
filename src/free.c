/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:02:18 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/07 12:56:28 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_matrix(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

void	free_list(t_stack **head, t_stack **tail)
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

void	remove_node(t_stack *node, t_stack **head, t_stack **tail)
{
	if (!node)
		return ;
	if (node->prev)
		node->prev->next = node->next;
	if (node->next)
		node->next->prev = node->prev;
	if (node == (*head))
		*head = node->next;
	if (node == (*tail))
		*tail = node->prev;
	free(node);
	node = NULL;
}
