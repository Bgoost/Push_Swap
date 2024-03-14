#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "libft/libft.h"

typedef struct s_node
{
    int number;
    int index;
    int push_cost;
    int above_median;
    int cheapest;
    struct s_node *target_node;
    struct s_node *next;
    struct s_node *prev;
} t_node;

t_node *find_last(t_node *stack);
int stack_sorted(t_node *stack);
void init_stack_a(t_node **stack_a, char **argv);

#endif
