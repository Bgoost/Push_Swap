/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 target.c											:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: crmanzan <crmanzan@student.42barcel>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/03/27 20:22:03 by crmanzan		   #+#	  #+#			  */
/*	 Updated: 2024/03/27 20:22:03 by crmanzan		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */
#include "../../inc/push_swap.h"
// QUE HAGO CON EL TARGET.
// MOVIMIENTOS FINALES, PASAR DE STACK B AL STACK A, BUSCAR SU MAXIMO MAS PROXIMO, Y SI NO HAY, BUSCAR EL MINIMO ABSOLUTO

t_node	*find_closest_bigger(t_node *stack_a, t_node *stack_b)
{
	t_node	*closest_bigger;

	closest_bigger = NULL;
	while (stack_a)
	{
		printf("%d\n", stack_a->number);
		printf("%d\n", closest_bigger->number);
		if (stack_a->number > stack_b->number && (!closest_bigger
				|| stack_a->number < closest_bigger->number))
			closest_bigger = stack_a;
		stack_a = stack_a->next;
	}
	return (closest_bigger);
}

void	find_target(t_node *stack_a, t_node *stack_b)
{
	t_node	*closest_bigger;

	if (!stack_b)
		return ;
	closest_bigger = find_closest_bigger(stack_a, stack_b);
	printf("%d", closest_bigger->number);
	if (!closest_bigger)
		stack_b->target = find_min(&stack_a);
	else
		stack_b->target = closest_bigger;
	find_target(stack_a, stack_b->next);
}
