/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 rotate.c											:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: crmanzan <crmanzan@student.42barcel>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/03/23 16:57:51 by crmanzan		   #+#	  #+#			  */
/*	 Updated: 2024/03/23 16:57:59 by crmanzan		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static void	rotate(t_node **stack)
{
	t_node	*last_node;
	t_node	*tmp;

	if (!(*stack) || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	last_node = find_last(*stack);
	tmp->next = NULL;
	last_node->next = tmp;
}
// static void	rotate(t_node **stack)
// {
// 	t_node	*first_node;
// 	t_node	*last_node;

// 	if (!*stack || !(*stack)->next)
// 		return ;
// 	last_node = find_last(*stack);
// 	first_node = *stack;
// 	last_node->next = *stack;
// 	last_node->prev->next = NULL;
// 	first_node->prev = last_node;
// 	*stack = (*stack)->prev;
// 	(*stack)->prev = NULL;
// }

void	ra(t_node **stack_a)
{
	rotate(stack_a);
	ft_printf("ra\n");
}

void	rb(t_node **stack_b)
{
	rotate(stack_b);
	ft_printf("rb\n");
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
}
