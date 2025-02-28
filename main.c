/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 18:22:58 by mmounsif          #+#    #+#             */
/*   Updated: 2025/02/28 19:16:49 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	Null_check(char **str)
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

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ac == 1)
		return (1);
	if (Null_check(av))
		return (ft_printf("Error\n"), 1);
	if (ac == 2)
		av = ft_split(av[1], ' ');
}
