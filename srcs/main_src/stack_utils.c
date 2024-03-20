#include "../../inc/push_swap.h"
int stack_len(t_node *stack)
{
    int i = 0;;
    if(!stack)
        return 0;
    while(stack)
    {
        stack = stack->next;
        i++;
    }
    return i;
}

t_node *find_last(t_node *stack)
{
    if(!stack)
        return(NULL);
    while(stack->next)
        stack = stack->next;
    return(stack);
}

t_node *find_max(t_node *stack)
{
    long max;
    t_node  *max_node;

    if(!stack)
        return(NULL);
    max = LONG_MIN;
    while(stack)
    {
        if(stack->number > max)
        {
            max = stack->number;
            max_node = stack;
        }
        stack = stack->next;
    }
    return (max_node);
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

