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
