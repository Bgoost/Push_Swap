/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 three_sort.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: crmanzan <crmanzan@student.42barcel>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/03/23 17:10:31 by crmanzan		   #+#	  #+#			  */
/*	 Updated: 2024/03/23 17:10:31 by crmanzan		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */
#include "../../inc/push_swap.h"

void	sort_three(t_node **stack_a)
{
	t_node	*biggest_node;

	biggest_node = find_max(*stack_a);
	if (biggest_node == *stack_a)
		ra(stack_a);
	else if ((*stack_a)->next == biggest_node)
		rra(stack_a);
	if ((*stack_a)->number > (*stack_a)->next->number)
		sa(stack_a);
}

void	sort_five(t_node **stack_a, t_node **stack_b)
{
	if ((*stack_a)->number > (*stack_a)->next->number)
		sa(stack_a);
	while (stack_len(*stack_a) > 3)
	{
		pb(stack_a, stack_b);
	}
	if (!(stack_sorted((*stack_a))))
		sort_three(stack_a);
	move_to_a(stack_a, stack_b);
	update_index(*stack_a);
	finish_sort(stack_a);
}
