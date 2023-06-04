/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deq_basic_operation2_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee2 <sanglee2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 21:20:18 by sanglee2          #+#    #+#             */
/*   Updated: 2023/06/02 21:20:30 by sanglee2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_node	*pop_top(t_deq *deq)
{
	t_node	*temp;

	temp = deq->a_top;
	if (is_empty(deq) == 1)
		return (NULL);
	if (deq->a_size == 1)
	{
		deq->a_top = NULL;
		deq->a_bot = NULL;
	}
	else
	{
		deq->a_top = temp->next;
		deq->a_top->prev = NULL;
	}
	temp->next = NULL;
	deq->a_size--;
	return (temp);
}

t_node	*pop_bot(t_deq *deq)
{
	t_node	*temp;

	temp = deq->a_bot;
	if (is_empty(deq) == 1)
		return (NULL);
	if (deq->a_size == 1)
	{
		deq->a_top = NULL;
		deq->a_bot = NULL;
	}
	else
	{
		deq->a_bot = temp->prev;
		deq->a_bot->next = NULL;
	}
	temp->prev = NULL;
	deq->a_size--;
	return (temp);
}
