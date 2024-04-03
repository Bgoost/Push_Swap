
#include "../../inc/push_swap.h"
void clear_stack(t_node **stack)
{
    t_node *tmp;
    t_node *next;

    if(*stack)
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
    if(array != NULL)
	{
		free(array);
        array = NULL;
	}
}
