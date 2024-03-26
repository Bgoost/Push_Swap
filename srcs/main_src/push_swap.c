/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 push_swap.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: crmanzan <crmanzan@student.42.fr>			+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/02/27 16:38:43 by crmanzan		   #+#	  #+#			  */
/*	 Updated: 2024/03/12 16:44:33 by crmanzan		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */
#include "../../inc/push_swap.h"

int	main(int argc, char *argv[])
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	i = 0;
	if (argc == 1)
		return (1);
	if(not_number(argv) || is_dup(argv) || error_int(argv))
		print_error();
	init_stack_a(&stack_a, argv + 1);
	if (!stack_sorted(stack_a))
	{
		ft_printf("not sorted\n");
		if (stack_len(stack_a) == 2)
			sa(&stack_a);
		else if (stack_len(stack_a) == 3)
			sort_three(&stack_a);
		else
			sort_all(&stack_a, &stack_b);
		ft_printf("IT'S NOW SORTED\n");
	}
	else
		ft_printf("it's sorted");
	//Print the stack
	while(stack_a)
	{
		printf("%d ", stack_a->number);
		stack_a = stack_a->next;
	}
	ft_printf("\n");
}
