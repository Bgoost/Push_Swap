#include "push_swap.h"

static void append_node(t_node **stack, int n)
{
    t_node *node;
    t_node *last_node;

    if(!stack)
        return ;
    node = malloc(sizeof(t_node));
    if (!node)
        return ;
    node->next = NULL;
    node->number = n;
    if(!(*stack))
    {
        *stack = node;
        node->prev = NULL;
    }
    else
    {
        last_node = find_last(*stack); //which node is the last one
        last_node->next = node;
        node->prev = last_node;
    }
}