/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 algorithm_utils.c									:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: crmanzan <crmanzan@student.42barcel>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/03/27 20:20:13 by crmanzan		   #+#	  #+#			  */
/*	 Updated: 2024/03/27 20:20:13 by crmanzan		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */
#include "../../inc/push_swap.h"

void	update_index(t_node *stack_a, t_node *stack_b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (stack_a)
	{
		stack_a->index = i;
		i++;
		stack_a = stack_a->next;
	}
	while (stack_b)
	{
		stack_b->index = j;
		j++;
		stack_b = stack_b->next;
	}
}

void	rate_single_cost(t_node *stack)
{
	int	len;
	int	stack_mid;

	len = stack_len(stack);
	stack_mid = len / 2;
	while (stack)
	{
		if (stack->index <= stack_mid)
			stack->single_cost = stack->index;
		else
			stack->single_cost = len - stack->index;
		
		stack = stack->next;
	}
}

void rate_both_cost(t_node *stack)
{
	int total;

	while (stack)
	{
		total = 0;
		total = stack->single_cost + stack->target->single_cost;
		stack->push_cost = total;
		printf("Cost: %d\n", stack->push_cost);
		stack = stack->next;
	}
}
t_node *min_push_cost(t_node *stack)
{
	t_node	*min;

	min = stack;
	while(stack)
	{
		if(stack->push_cost < min->push_cost)
			min = stack;
		stack = stack->next;
	}
	return (min);
}

t_node *rrr_or_rr(t_node **stack_a, t_node **stack_b, t_node *min_pc)
{
	int	mid_a;
	int	mid_b;

	mid_a = stack_len(*stack_a) / 2;
	mid_b = stack_len(*stack_b) / 2;
}
