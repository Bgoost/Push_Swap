/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 median.c											:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: crmanzan <crmanzan@student.42barcel>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/03/25 18:44:52 by crmanzan		   #+#	  #+#			  */
/*	 Updated: 2024/03/25 18:45:05 by crmanzan		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */
#include "../../inc/push_swap.h"

int	*make_array_num(t_node *stack)
{
	int	len;
	int	*array;
	int	i;

	i = 0;
	len = stack_len(stack);
	array = malloc((len + 1) * sizeof(*array));
	if (!array)
		return (exit(1), NULL);
	while (i < len)
	{
		array[i] = stack->number;
		if (!array)
		{
			free(array);
			return (NULL);
		}
		i++;
		stack = stack->next;
	}
	array[i] = '\0';
	return (array);
}

static int	find_min_median(int *array, int len)
{
	int	i;
	int	min;

	i = 0;
	min = array[i];
	while (i < len)
	{
		if (array[i] < min)
			min = array[i];
		i++;
	}
	return (min);
}

int	find_median(int *array, int len, int median)
{
	int	i;
	int	min;
	int	tmp;

	if (median % 2 == 0)
		median = median / 2;
	else
		median = (median + 1) / 2;
	while (median--)
	{
		min = find_min_median(array, len);
		i = 0;
		while (i < len)
		{
			if (array[i] == min)
			{
				tmp = array[i];
				array[i] = INT_MAX;
				break ;
			}
			i++;
		}
	}
	return (tmp);
}
