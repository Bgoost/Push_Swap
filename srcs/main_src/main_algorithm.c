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

static void finish_sort(t_node **stack_a)
{
	t_node *min;
	int		middle;

	middle = stack_len(*stack_a) / 2;
	min = find_min(stack_a);
	while(min->index != 0)
	{
		if(min->index < middle)
			ra(stack_a);
		else
			rra(stack_a);
		update_index(*stack_a);
	}
}

t_node *last_move(t_node **stack_a, t_node **stack_b, t_node *min_pc)
{
	int	mid_a;
	int	mid_b;

	mid_a = stack_len(*stack_a) / 2;
	mid_b = stack_len(*stack_b) / 2;
	while(min_pc->index != 0)
	{
		if (min_pc->index < mid_b)
			rb(stack_b);
		else
			rrb(stack_b);
		update_index(*stack_b);
	}
	while(min_pc->target->index != 0)
	{
		if (min_pc->target->index < mid_a)
			ra(stack_a);
		else
			rra(stack_a);
		update_index(*stack_a);
	}
}

static void	move_to_a(t_node **stack_a, t_node **stack_b)
{
	t_node	*min_pc;

	while (*stack_b)
	{
		find_target(*stack_a, *stack_b);
		update_index(*stack_a);
		update_index(*stack_b);
		rate_single_cost(*stack_a);
		rate_single_cost(*stack_b);
		rate_both_cost(*stack_b);
		min_pc = min_push_cost(*stack_b);
		if(min_pc->index != 0 && min_pc->target->index != 0)
			rrr_or_rr(stack_a, stack_b, min_pc);
		// coste total = coste base (el coste del propio item) + coste target (el coste del target)
		last_move(stack_a, stack_b, min_pc);
		pa(stack_a, stack_b);
	}
}

void	sort_all(t_node **stack_a, t_node **stack_b)
{
	int	median;
	int	*array;

	array = make_array_num(*stack_a);
	median = find_median(array, stack_len(*stack_a), stack_len(*stack_a));
	//free_array(array);
	while (stack_len(*stack_a) > 3)
	{
		pb(stack_a, stack_b);
		if (stack_len(*stack_b) > 1)
		{
			if ((*stack_b)->number > median)
			{
				rb(stack_b);
			}
		}
	}
	if (!(stack_sorted((*stack_a))))
		sort_three(stack_a);
	move_to_a(stack_a, stack_b);
	finish_sort(stack_a);
}
