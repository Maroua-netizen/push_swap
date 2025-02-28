/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 18:22:50 by mmounsif          #+#    #+#             */
/*   Updated: 2025/02/28 19:20:37 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include "Libft/libft.h"

typedef struct s_stack {
	int				n;
	struct s_stack	*prev;
	struct s_stack	*next;
}					t_stack;

#endif