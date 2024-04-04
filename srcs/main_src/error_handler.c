/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 error_handler.c									:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: crmanzan <crmanzan@student.42barcel>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/03/25 18:50:35 by crmanzan		   #+#	  #+#			  */
/*	 Updated: 2024/03/25 18:50:35 by crmanzan		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */
#include "../../inc/push_swap.h"

void	print_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	is_dup(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 1;
		while (argv[i + j])
		{
			if (ft_atol(argv[i]) == ft_atol(argv[i + j]))
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	not_number(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		if (!argv[i][j])
			return (1);
		if (argv[i][j] == '-' || argv[i][j] == '+')
		{
			if(argv[i][j + 1])
				j++;
		}
		while (argv[i][j])
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	error_int(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_atol(argv[i]) > INT_MAX || ft_atol(argv[i]) < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}
