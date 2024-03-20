#include "../../inc/push_swap.h"
static void reverse_rotate(t_node **stack)
{
    t_node *last_node;
    t_node *first_node;

    if(!(*stack)|| !(*stack)->next)
        return;
    first_node = *stack;
    last_node = find_last(*stack);
    while(first_node)
    {
        if(first_node->next->next == NULL)
        {
            first_node->next = NULL;
            break ;
        }
        first_node = first_node->next;
    }
    last_node->next = *stack;
    *stack = last_node;
}
// AUN NO ESTA HECHO
void rra(t_node **stack_a)
{
    reverse_rotate(stack_a);
    ft_printf("rra\n");
}

void rrb(t_node **stack_b)
{
    reverse_rotate(stack_b);
    ft_printf("rrb\n");
}

void rrr(t_node **stack_a, t_node **stack_b)
{
    reverse_rotate(stack_a);
    reverse_rotate(stack_b);
    ft_printf("rrr\n");
}