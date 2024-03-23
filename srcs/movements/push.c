/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 16:54:39 by crmanzan          #+#    #+#             */
/*   Updated: 2024/03/23 16:57:30 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../inc/push_swap.h"

static void	push(t_node **dst, t_node **src)
{
	t_node	*push_tmp;

	if (!*src)
		return ;
	push_tmp = *src;
	*src = (*src)->next;
	if (!*dst)
	{
		*dst = push_tmp;
		push_tmp->next = NULL;
	}
	else
	{
		push_tmp->next = *dst;
		push_tmp->next->prev = push_tmp;
		*dst = push_tmp;
	}
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pa\n");
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	push(stack_b, stack_a);
	ft_printf("pb\n");
}
