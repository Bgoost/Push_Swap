/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 push_swap.h										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: crmanzan <crmanzan@student.42barcel>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/03/23 17:22:16 by crmanzan		   #+#	  #+#			  */
/*	 Updated: 2024/03/23 17:22:23 by crmanzan		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include "../libft/inc/libft.h"
# include "../libft/inc/printf.h"

typedef struct s_node
{
	int				number;
	int				index;
	int				single_cost;
	int				cheapest;
	struct s_node	*target;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

int		error_int(char **argv);
int		not_number(char **argv);
int		is_dup(char **argv);
void	print_error(void);
t_node	*find_last(t_node *stack);
t_node	*find_max(t_node *stack);
t_node	*find_min(t_node **stack);
void	init_stack_a(t_node **stack_a, char **argv);
long	ft_atol(char *s);
int		stack_len(t_node *stack);
int		stack_sorted(t_node *stack);
void	sort_three(t_node **stack_a);
int		*make_array_num(t_node *stack);
int		find_median(int *array, int len, int median);
void	sort_all(t_node **stack_a, t_node **stack_b);
void	find_target(t_node *stack_a, t_node *stack_b);
void	update_index(t_node *stack_a, t_node *stack_b);
void	rate_single_cost(t_node *stack);

// Movements
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);
void	sa(t_node **stack_a);
void	sb(t_node **stack_b);
void	ss(t_node **stack_a, t_node **stack_b);
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	rr(t_node **stack_a, t_node **stack_b);
void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);
void	rrr(t_node **stack_a, t_node **stack_b);
#endif
