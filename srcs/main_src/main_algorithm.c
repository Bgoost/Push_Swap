#include "../../inc/push_swap.h"
static void move_to_a(t_node **stack_a, t_node **stack_b)
{
    t_node  *push_cost;

    while(*stack_b)
    {
        find_target(*stack_a, *stack_b);
        pa(stack_a, stack_b);
    }
}

void sort_all(t_node **stack_a, t_node **stack_b)
{
    int median;
    int *array;

    array = make_array_num(*stack_a);
    median = find_median(array, stack_len(*stack_a), stack_len(*stack_a));
    printf("%d\n", median);
    while(stack_len(*stack_a) > 3)
    {
		printf("NUMBER: %d, INDEX: %d\n", (*stack_a)->number, (*stack_a)->index);
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
    move_to_a(stack_a, stack_b);
    // median = find_
}