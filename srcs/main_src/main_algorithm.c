#include "../../inc/push_swap.h"


void sort_all(t_node **stack_a, t_node **stack_b)
{
    int median;
    char **array;

    array = make_array_num(*stack_a);
    median = find_median(array, stack_len(*stack_a), 0);

    while(stack_len(*stack_a) > 3)
    {
        pa(stack_a, stack_b);
        if(stack_len(*stack_b) > 1)
            if((*stack_b)->number > median)
                rb(stack_b);
    }
    if(!(stack_sorted((*stack_a))))
        sort_three(stack_a);
    // median = find_
}