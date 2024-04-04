
#include "../../inc/push_swap.h"
void clear_stack(t_node **stack)
{
    t_node *tmp;

    if(stack)
    {
        tmp = *stack;
        while(stack)
        {
            *stack = (*stack)->next;
            free(tmp);
            tmp = (*stack);
        }
    }
    *stack = NULL;
}

void free_array(int *array)
{
    if(array != NULL)
    {
        free(array);
        array = NULL;
    }
}
