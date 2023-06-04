/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_loc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee2 <sanglee2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 01:47:56 by sanglee2          #+#    #+#             */
/*   Updated: 2023/05/30 21:41:10 by sanglee2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

int	find_min_loc(t_deq	*deq)
{
	t_node	*temp;
	int		min_a;
	int		min_loc;
	int		cur_loc;

	temp = deq->a_top;
	min_a = INT_MAX;
	cur_loc = 0;
	while (temp)
	{
		if (temp->index < min_a)
		{
			min_a = temp->index;
			min_loc = cur_loc;
		}
		temp = temp->next;
		cur_loc++;
	}
	return (min_loc);
}
