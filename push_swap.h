/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:38:34 by crmanzan          #+#    #+#             */
/*   Updated: 2024/03/11 19:15:26 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>

typedef struct  s_stack_a {
    int     num;
    t_stack_a    *next;
}               t_stack_a;

typedef struct  s_stack_b {
    int     num;
    t_stack_b    *next;
}               t_stack_b;


#endif