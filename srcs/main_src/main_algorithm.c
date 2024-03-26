#include "../../inc/push_swap.h"


void sort_all(t_node **stack_a, t_node **stack_b)
{
    int median;
    int *array;

    array = make_array_num(*stack_a);
    median = find_median(array, stack_len(*stack_a), stack_len(*stack_a));
    printf("%d\n", median);
    while(stack_len(*stack_a) > 3)
    {
        pb(stack_a, stack_b);
        if(stack_len(*stack_b) > 1)
            if((*stack_b)->number > median){
                printf("%d is above median\n", (*stack_b)->number);
                rb(stack_b);
            }
            else
                printf("%d is NOT above median\n", (*stack_b)->number);
    }
    if(!(stack_sorted((*stack_a))))
        sort_three(stack_a);
    // median = find_
}