/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee2 <sanglee2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 03:36:04 by sanglee2          #+#    #+#             */
/*   Updated: 2023/06/02 21:49:14 by sanglee2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	ft_free_deq_a(t_deq	*deq_a)
{
	t_node	*temp;

	while (deq_a->a_top)
	{
		temp = deq_a->a_top;
		deq_a->a_top = deq_a->a_top->next;
		free(temp);
	}
	free(deq_a);
}

void	ft_free_deq_b(t_deq	*deq_b)
{
	t_node	*temp;

	while (deq_b->b_top)
	{
		temp = deq_b->b_top;
		deq_b->b_top = deq_b->b_top->next;
		free(temp);
	}
	free(deq_b);
}

void	ft_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}
