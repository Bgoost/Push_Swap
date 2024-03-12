/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:38:43 by crmanzan          #+#    #+#             */
/*   Updated: 2024/03/12 16:44:33 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
    t_node  *stack_a;
    t_node  *stack_b;
    stack_a = NULL;
    stack_b = NULL;
    
    int i;
    
    i = 0;
    if(argc == 1)
        exit(0);
    
    if(!argv[1][i])
    {
        write(2, "Error", 5);
        exit(0);    
    }
    printf("%s", argv[1]);
}