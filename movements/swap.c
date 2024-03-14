#include "push_swap.h"

static void swap(t_node **stack)
{
    int num;

    if (!(*stack) || !(*stack)->next)
        return ;
    num = (*stack)->number;
    (*stack)->number = (*stack)->next->number;
    (*stack)->next->number = num;
}

void sa(t_node **stack_a)
{
    swap(stack_a);
    ft_printf("sa\n");
}

void sb(t_node **stack_b)
{
    swap(stack_b);
    ft_printf("sb\n");
}

void ss(t_node **stack_a, t_node **stack_b)
{
    swap(stack_a);
    swap(stack_b);
    ft_printf("ss\n");
}
void pa(t_node *stack_a, t_node *stack_b)
{
    
}