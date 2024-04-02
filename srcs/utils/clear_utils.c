
#include "../../inc/push_swap.h"
void clear_stack(t_node **stack)
{
    t_node *tmp;
    t_node *next;

    if(*stack && stack)
    {
        tmp = *stack;
        while(tmp)
        {
            next = tmp->next;
            free(tmp);
            tmp = next;
        }
        *stack = NULL;
    }
}

void free_array(int *array)
{
    int i;
    
    i = 0;
    while (array[i])
    {
        free(array[i]);
        array[i] = 0;
        i++;
    }
    free((void *)array);
    array = 0;
}
