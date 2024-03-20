/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:54:37 by crmanzan          #+#    #+#             */
/*   Updated: 2023/10/20 13:56:40 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <limits.h>
# include "libft.h"

int	            ft_printf(char const *str, ...);
int	            ft_char_printf(char c);
int             ft_str_printf(char *str);
int             ft_hexptr_printf(unsigned long hex, int shift, int mayus);
int             ft_nbr_printf(int n);
unsigned int    ft_unnbr_printf(unsigned int n);

#endif