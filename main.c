/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 18:22:58 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/09 14:05:29 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	parsing(char **av, t_stack **a, t_stack **a_tail);

int	main(int ac, char **av)
{
	static t_stack	*a;
	static t_stack	*b;
	static t_stack	*a_tail;
	static t_stack	*b_tail;

	if (ac == 1)
		return (1);
	null_check(av);
	error_check(av);
	parsing(av, &a, &a_tail);
	double_check(&a, &a_tail);
	if (is_sorted(a, a_tail))
		return (free_list(&a, &a_tail), 0);
	sort(&a, &a_tail, &b, &b_tail);
	free_list(&a, &a_tail);
}

static void	parsing(char **av, t_stack **a, t_stack **a_tail)
{
	char	**strs;
	int		i;
	int		j;

	i = 1;
	while (av[i])
	{
		strs = ft_split(av[i], ' ');
		if (i == 1)
		{
			init(a, a_tail, ft_atol(strs[0]), 0);
			j = 1;
		}
		else
			j = 0;
		while (strs[j])
		{
			insert_end(a, a_tail, ft_atol(strs[j]), 0);
			j++;
		}
		free_matrix(strs);
		i++;
	}
	get_position(a);
}
