/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_arg_arr_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee2 <sanglee2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 21:18:07 by sanglee2          #+#    #+#             */
/*   Updated: 2023/05/29 22:15:27 by sanglee2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	make_arg_arr(t_deq *deq_a)
{
	int		i;
	t_node	*temp;

	i = 0;
	temp = deq_a->a_top;
	deq_a->arr = (int *)malloc(sizeof(int) * deq_a->a_size);
	if (!deq_a->arr)
		return ;
	while (temp)
	{
		deq_a->arr[i++] = temp->content;
		temp = temp->next;
	}
}
