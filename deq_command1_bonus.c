/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deq_command1_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee2 <sanglee2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:15:24 by sanglee2          #+#    #+#             */
/*   Updated: 2023/06/02 21:29:49 by sanglee2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	check_deq_a(t_deq *deq_a, t_node *temp)
{
	if (deq_a->a_size < 1)
	{
		temp->next = NULL;
		temp->prev = NULL;
		deq_a->a_top = temp;
		deq_a->a_bot = temp;
	}
}

void	check_deq_b(t_deq *deq_b, t_node *temp)
{
	if (deq_b->b_size < 1)
	{
		temp->next = NULL;
		temp->prev = NULL;
		deq_b->b_top = temp;
		deq_b->b_bot = temp;
	}
}

void	pa(t_deq *deq_a, t_deq *deq_b)
{
	t_node	*temp;

	if (deq_b->b_size < 1)
		return ;
	else
	{
		temp = deq_b->b_top;
		if (deq_b->b_size == 1)
		{
			deq_b->b_top = NULL;
			deq_b->b_bot = NULL;
		}
		if (deq_b->b_size > 1)
		{
			deq_b->b_top = deq_b->b_top->next;
			deq_b->b_top->prev = NULL;
		}
		check_deq_a(deq_a, temp);
		push_top_a(deq_a, temp);
	}
	deq_b->b_size = deq_b->b_size - 1;
}

void	pb(t_deq *deq_a, t_deq *deq_b)
{
	t_node	*temp;

	if (deq_a->a_size < 1)
		return ;
	else
	{
		temp = deq_a->a_top;
		if (deq_a->a_size == 1)
		{
			deq_a->a_top = NULL;
			deq_a->a_bot = NULL;
		}
		if (deq_a->a_size > 1)
		{
			deq_a->a_top = deq_a->a_top->next;
			deq_a->a_top->prev = NULL;
		}
		check_deq_b(deq_b, temp);
		push_top_b(deq_b, temp);
	}
	deq_a->a_size = deq_a->a_size - 1;
}
