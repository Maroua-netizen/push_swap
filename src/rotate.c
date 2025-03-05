/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 11:34:59 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/05 17:39:00 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_stack **head, t_stack **tail)
{
	if (ft_list_size(*head) < 2)
		return ;
	insert_end(head, tail, (*head)->n, NULL);
	remove_node(*head, head, tail);
}
