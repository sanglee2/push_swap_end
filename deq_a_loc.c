/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deq_a_loc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee2 <sanglee2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:19:28 by sanglee2          #+#    #+#             */
/*   Updated: 2023/06/02 21:28:11 by sanglee2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

static int	get_a_loc_bigger(t_deq	*deq_a, t_node	*temp)
{
	int	deq_a_loc;
	int	cur_loc;
	int	min_a;

	cur_loc = 0;
	min_a = INT_MAX;
	temp = deq_a->a_top;
	while (temp)
	{
		if (temp->index < min_a)
		{
			min_a = temp->index;
			deq_a_loc = cur_loc;
		}
		temp = temp->next;
		cur_loc++;
	}
	return (deq_a_loc);
}

int	get_a_loc(t_deq	*deq_a, int b_content)
{
	int		deq_a_loc;
	int		cur_loc;
	int		min;
	t_node	*temp;

	cur_loc = 0;
	min = INT_MAX;
	temp = deq_a->a_top;
	while (temp)
	{
		if (b_content < temp->index && min > temp->index - b_content)
		{
			min = temp->index - b_content;
			deq_a_loc = cur_loc;
		}
		temp = temp->next;
		cur_loc++;
	}
	if (min == INT_MAX)
		deq_a_loc = get_a_loc_bigger(deq_a, temp);
	if (deq_a_loc > deq_a->a_size / 2)
		deq_a_loc = (deq_a->a_size - deq_a_loc) * -1;
	return (deq_a_loc);
}
