#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "../libft/libft.h"

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
int stack_len(t_node *stack);
t_node *find_max(t_node *stack);
void sort_three(t_node **stack_a);

void pa(t_node **stack_a, t_node **stack_b);
void pb(t_node **stack_a, t_node **stack_b);
void sa(t_node **stack_a);
void sb(t_node **stack_b);
void ss(t_node **stack_a, t_node **stack_b);
void ra(t_node **stack_a);
void rb(t_node **stack_b);
void rr(t_node **stack_a, t_node **stack_b);
void rra(t_node **stack_a);
void rrb(t_node **stack_b);
void rrr(t_node **stack_a, t_node **stack_b);



#endif
