/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 18:22:58 by mmounsif          #+#    #+#             */
/*   Updated: 2025/03/03 20:42:17 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		null_check(char **str);
void	parsing(char **av, t_stack **a, t_stack **a_tail);

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*a_tail;
	t_stack	*b;
	t_stack	*b_tail;

	if (ac == 1)
		return (1);
	if (null_check(av))
		return (ft_printf("Error\n"), 1);
	a = NULL;
	a_tail = NULL;
	b = NULL;
	b_tail = NULL;
	parsing(av, &a, &a_tail);
}

int	null_check(char **str)
{
	int	i;

	i = 1;
	while (str[i])
	{
		if (!str[i][0])
			return (1);
		i++;
	}
	return (0);
}

void	parsing(char **av, t_stack **a, t_stack **a_tail)
{
	char	**strs;
	int		i;
	int		j;

	i = 0;
	while (av[i + 1])
	{
		strs = ft_split(av[i + 1], ' ');
		if (!i)
		{
			init(a, a_tail, atol(strs[0]));
			j = 1;
		}
		else
			j = 0;
		while (strs[j])
		{
			insert_end(a_tail, atol(strs[j]));
			j++;
		}
		free(strs);
		i++;
	}
}
