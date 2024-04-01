/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 20:28:02 by crmanzan          #+#    #+#             */
/*   Updated: 2024/03/27 20:29:54 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../inc/push_swap.h"

static void	move_to_a(t_node **stack_a, t_node **stack_b)
{
	t_node	*min_pc;

	while (*stack_b)
	{
		find_target(*stack_a, *stack_b);
		update_index(*stack_a, *stack_b);
		printf("--- stack a ----\n");
		rate_single_cost(*stack_a);
		printf("--- stack b ----\n");
		rate_single_cost(*stack_b);
		rate_both_cost(*stack_b);
		min_pc = min_push_cost(*stack_b);
		if(min_pc->index != 0 && min_pc->target->index != 0)
			rrr_or_rr(stack_a, stack_b, min_pc);
		// coste total = coste base (el coste del propio item) + coste target (el coste del target)
		printf("NUMERO: %d, INDICE: %d, PUSH_COST: %d\n", (*stack_a)->number, (*stack_b)->index, (*stack_a)->push_cost);
		pa(stack_a, stack_b);
	}
}

void	sort_all(t_node **stack_a, t_node **stack_b)
{
	int	median;
	int	*array;

	array = make_array_num(*stack_a);
	median = find_median(array, stack_len(*stack_a), stack_len(*stack_a));
	printf("MEDIAN IS: %d\n", median);
	while (stack_len(*stack_a) > 3)
	{
		printf("NUMBER: %d, INDEX: %d\n", (*stack_a)->number, (*stack_a)->index);
		pb(stack_a, stack_b);
		if (stack_len(*stack_b) > 1)
		{
			if ((*stack_b)->number > median)
			{
				printf("%d is above median\n", (*stack_b)->number);
				rb(stack_b);
			}
			else
				printf("%d is NOT above median\n", (*stack_b)->number);
		}
	}
	if (!(stack_sorted((*stack_a))))
		sort_three(stack_a);
	move_to_a(stack_a, stack_b);
}
