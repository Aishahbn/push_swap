/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 14:45:00 by abaninas          #+#    #+#             */
/*   Updated: 2026/11/18 15:16:40 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_stack
{
    int             value;
	int 			index;
    struct s_stack  *next;
}   t_stack;

double	compute_disorder(t_stack *a);
void	sort_medium(t_stack **a, t_stack **b);
void	sort_adaptive(t_stack **a, t_stack **b);

#endif