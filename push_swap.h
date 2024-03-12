#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "libft/libft.h"

typedef struct s_node
{
    int number;
    int index;
    int push_cost;
    int above_median;
    int cheapest;
    t_node *target_node;
    t_node *next;
    t_node *prev;
    /* data */
} t_node;


#endif
