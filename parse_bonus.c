/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee2 <sanglee2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 21:10:39 by sanglee2          #+#    #+#             */
/*   Updated: 2023/06/02 21:31:02 by sanglee2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap_bonus.h"

t_deq	*malloc_deq_a(void)
{
	t_deq	*deq_a;

	deq_a = create();
	init_deq(deq_a);
	return (deq_a);
}

t_deq	*malloc_deq_b(void)
{
	t_deq	*deq_b;

	deq_b = create();
	init_deq(deq_b);
	return (deq_b);
}

t_deq	*parse(int ac, char **av, int i)
{
	char	**temp;
	char	**arr;
	t_node	*node;
	t_deq	*deq_a;

	deq_a = malloc_deq_a();
	while (i < ac)
	{
		arr = ft_split(av[i], ' ');
		temp = arr;
		while (*temp)
		{	
			node = init_node(ft_atoi(*temp));
			push_bot_a(deq_a, node);
			temp++;
		}
		ft_free(arr);
		i++;
	}
	return (deq_a);
}
