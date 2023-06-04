/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee2 <sanglee2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 21:09:19 by sanglee2          #+#    #+#             */
/*   Updated: 2023/05/29 21:15:32 by sanglee2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	space_check(char *av)
{
	int	j;

	j = 0;
	while (av[j])
	{
		if (av[j] != ' ')
			return (0);
		j++;
	}
	return (1);
}

int	check_arg(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac < 2)
		return (1);
	while (av[i])
	{
		if (!*av[i])
		{
			ft_error ();
			return (1);
		}
		if (space_check(av[i]) == 1)
		{
			ft_error();
			return (1);
		}
		i++;
	}
	return (0);
}
