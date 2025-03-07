/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 18:22:58 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/07 13:02:07 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	parsing(char **av, t_stack **a, t_stack **a_tail);

void	leaks(void)
{
	system("leaks -q push_swap");
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	t_stack	*a_tail;
	t_stack	*b_tail;

	atexit(leaks);
	if (ac == 1)
		return (1);
	null_check(av);
	error_check(av);
	a = NULL;
	b = NULL;
	a_tail = NULL;
	b_tail = NULL;
	parsing(av, &a, &a_tail);
	double_check(&a, &a_tail);
	is_sorted(a, a_tail);
	ra(&a, &a_tail);
	rra(&a, &a_tail);
	sa(&a);
	pb(&a, &a_tail, &b, &b_tail);
	t_stack	*curr = a;
	while (curr)
	{
		ft_printf("%d ", curr->n);
		curr = curr->next;
	}
	ft_printf("\n");
	curr = b;
	while (curr)
	{
		ft_printf("%d ", curr->n);
		curr = curr->next;
	}
	ft_printf("\n\n");
	if (a)
		free_list(&a, &a_tail);
	if (b)
		free_list(&b, &b_tail);
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
			init(a, a_tail, ft_atol(strs[0]), strs);
			j = 1;
		}
		else
			j = 0;
		while (strs[j])
		{
			insert_end(a, a_tail, ft_atol(strs[j]), strs);
			j++;
		}
		free_matrix(strs);
		i++;
	}
}
