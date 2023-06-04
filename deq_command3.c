/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deq_command3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee2 <sanglee2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 21:21:50 by sanglee2          #+#    #+#             */
/*   Updated: 2023/06/02 21:29:25 by sanglee2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sa(t_deq *deq_a)
{
	int	temp;

	if (deq_a->a_size < 2)
		return ;
	temp = deq_a->a_top->index;
	deq_a->a_top->index = deq_a->a_top->next->index;
	deq_a->a_top->next->index = temp;
	write (1, "sa\n", 3);
}

void	sb(t_deq *deq_b)
{
	int	temp;

	if (deq_b->b_size < 2)
		return ;
	temp = deq_b->b_top->index;
	deq_b->b_top->index = deq_b->b_top->next->index;
	deq_b->b_top->next->index = temp;
	write(1, "sb\n", 3);
}

void	ss(t_deq *deq_a, t_deq *deq_b)
{
	int	temp;

	if (deq_a->a_size < 2)
		return ;
	temp = deq_a->a_top->index;
	deq_a->a_top->index = deq_a->a_top->next->index;
	deq_a->a_top->next->index = temp;
	if (deq_b->b_size < 2)
		return ;
	temp = deq_b->b_top->index;
	deq_b->b_top->index = deq_b->b_top->next->index;
	deq_b->b_top->next->index = temp;
	write(1, "ss\n", 3);
}

void	ra(t_deq *deq_a)
{
	t_node	*temp;

	if (deq_a->a_size < 2)
		return ;
	temp = deq_a->a_top;
	deq_a->a_top = temp->next;
	deq_a->a_bot->next = temp;
	temp->prev = deq_a->a_bot;
	deq_a->a_bot = temp;
	deq_a->a_bot->next = NULL;
	write(1, "ra\n", 3);
}

void	rra(t_deq *deq_a)
{
	t_node	*temp;

	if (deq_a->a_size < 2)
		return ;
	temp = deq_a->a_bot;
	deq_a->a_bot = deq_a->a_bot->prev;
	deq_a->a_bot->next = NULL;
	deq_a->a_top->prev = temp;
	temp->next = deq_a->a_top;
	deq_a->a_top = temp;
	deq_a->a_top->prev = NULL;
	write(1, "rra\n", 4);
}
