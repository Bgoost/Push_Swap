/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:33:07 by crmanzan          #+#    #+#             */
/*   Updated: 2024/04/04 18:33:53 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../inc/push_swap.h"

void	clear_stack(t_node **stack)
{
	t_node	*temp;
	t_node	*next;

	if (*stack && stack)
	{
		temp = *stack;
		while (temp)
		{
			next = temp->next;
			free(temp);
			temp = next;
		}
		*stack = NULL;
	}
}

void	free_array(int *array)
{
	if (array != NULL)
	{
		free(array);
		array = NULL;
	}
}
