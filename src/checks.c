/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:59:38 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/08 09:13:28 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static bool	allspaces(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' '))
			return (false);
		i++;
	}
	return (true);
}

void	null_check(char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (!av[i][0] || allspaces(av[i]))
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

void	double_check(t_stack **a, t_stack **a_tail)
{
	t_stack	*curr;

	curr = *a;
	while (curr)
	{
		if (find_node(curr->next, curr->n))
		{
			free_list(a, a_tail);
			ft_printf("Error\n");
			exit(3);
		}
		curr = curr->next;
	}
}

bool	is_sorted(t_stack *a, t_stack *a_tail)
{
	t_stack	*curr;

	curr = a;
	while (curr->next && curr->n < curr->next->n)
		curr = curr->next;
	if (curr == a_tail)
		return (true);
	return (false);
}
