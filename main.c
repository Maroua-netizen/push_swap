/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 18:22:58 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/04 10:15:29 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	null_check(char **av);
void	error_check(char **av);
void	parsing(char **av, t_stack **a, t_stack **a_tail);

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	t_stack	*a_tail;
	t_stack	*b_tail;

	if (ac == 1)
		return (1);
	null_check(av);
	error_check(av);
	a = NULL;
	b = NULL;
	a_tail = NULL;
	b_tail = NULL;
	parsing(av, &a, &a_tail);
	t_stack	*curr = a;
	while (curr)
	{
		ft_printf("%d ", curr->n);
		curr = curr->next;
	}
}

void	null_check(char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (!av[i][0])
		{
			ft_printf("Error\n");
			exit(1);
		}
		i++;
	}
}

void	error_check(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]) 
				&& !((av[i][j] >= '\t' && av[i][j] <= '\r') || av[i][j] == ' ')
				&& !((av[i][j] == '-' || av[i][j] == '+') 
				&& ft_isdigit(av[i][j + 1])))
			{
				ft_printf("Error\n");
				exit(2);
			}
			j++;
		}
		i++;
	}
}

void	parsing(char **av, t_stack **a, t_stack **a_tail)
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
			init(a, a_tail, ft_atol(strs[0]));
			j = 1;
		}
		else
			j = 0;
		while (strs[j])
		{
			insert_end(a_tail, ft_atol(strs[j]));
			j++;
		}
		free_tab(strs);
		i++;
	}
}
