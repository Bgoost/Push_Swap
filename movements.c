#include "push_swap.h"

void sa(t_node *stack_a)
{
    int num;

    num = stack_a->number;
    stack_a->number = stack_a->next->number;
    stack_a->next->number = num;
}
void sb(t_node *stack_b)
{
    int num;

    num = stack_b->number;
    stack_b->number = stack_b->next->number;
    stack_b->next->number = num;
}
void ss(t_node *stack_a, t_node *stack_b)
{
    sa(stack_a);
    sb(stack_b);
}
void pa(t_node *stack_a, t_node *stack_b)
{
    
}