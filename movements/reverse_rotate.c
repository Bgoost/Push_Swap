#include "../push_swap.h"
static void reverse_rotate(t_node **stack)
{
    t_node *last_node;
    t_node *tmp;

    if(!(*stack)|| !(*stack)->next)
        return;
    tmp = *stack;
    *stack = (*stack)->next;
    last_node = find_last(*stack);
    tmp->next = NULL;
    last_node->next = tmp;

}
// AUN NO ESTA HECHO
void rra(t_node **stack_a)
{
    reverse_rotate(stack_a);
    ft_printf("ra\n");
}

void rrb(t_node **stack_b)
{
    reverse_rotate(stack_b);
    ft_printf("rb\n");
}

void rrr(t_node **stack_a, t_node **stack_b)
{
    rotate(stack_a);
    rotate(stack_b);
    ft_printf("ra\n");
}