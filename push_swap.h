/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 18:22:50 by mmounsif          #+#    #+#             */
/*   Updated: 2025/02/23 12:30:35 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

typedef struct s_stack {
	int				n;
	struct s_stack	*prev;
	struct s_stack	*next;
}					t_stack;

//ft_printf
void	ft_putchar(char c, int *count);
void	ft_putstr(char *s, int *count);
void	ft_putnbr(int n, int *count);
void	ft_puthex(unsigned int n, int i, int *count);
void	ft_putunbr(unsigned int n, int *count);
void	ft_putptr(unsigned long long ptr, int *count);
int		ft_printf(const char *format, ...);

#endif