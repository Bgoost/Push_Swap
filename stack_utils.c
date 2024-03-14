#include "push_swap.h"



t_node *find_last(t_node *stack)
{
    if(!stack)
        return(NULL);
    while(stack->next)
        stack = stack->next;
    return(stack);
}

int stack_sorted(t_node *stack)
{
    while(stack->next)
    {
        if(stack->number > stack->next->number)
            return(0);
        stack = stack->next;
    }
    return(1);
}

