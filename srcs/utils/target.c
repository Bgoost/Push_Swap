#include "../../inc/push_swap.h"

// QUE HAGO CON EL TARGET.
// MOVIMIENTOS FINALES, PASAR DE STACK B AL STACK A, BUSCAR SU MAXIMO MAS PROXIMO, Y SI NO HAY, BUSCAR EL MINIMO ABSOLUTO
t_node *find_closest_bigger(t_node *stack_a, t_node *stack_b)
{
    t_node *closest_bigger;

    closest_bigger = NULL;
    while(stack_a)
    {
        if(stack_a->number > stack_b->number && (!closest_bigger || stack_a->number < closest_bigger->number))
            closest_bigger = stack_a;
        stack_a = stack_a->next;
    }
    return(closest_bigger);
}

void find_target(t_node *stack_a, t_node *stack_b)
{
    t_node *closest_bigger;

    if(!stack_b)
        return ;
    closest_bigger = find_closest_bigger(stack_a, stack_b);
    if(!closest_bigger)
        stack_b->target = find_min(&stack_a);
    else
        stack_b->target = closest_bigger;
    printf("NUMBER: %d, TARGET: %d, INDEX: %d\n", stack_b->number, stack_b->target->number, stack_b->index);
    find_target(stack_a, stack_b->next);
}