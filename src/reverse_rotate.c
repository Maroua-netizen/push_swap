/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 11:41:57 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/05 17:38:38 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_stack **head, t_stack **tail)
{
	if (ft_list_size(*head) < 2)
		return ;
	insert_begin(head, (*tail)->n);
	remove_node(*tail, head, tail);
}
