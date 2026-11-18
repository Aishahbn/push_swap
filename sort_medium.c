/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 14:45:21 by abaninas          #+#    #+#             */
/*   Updated: 2026/11/18 15:41:08 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    set_index(t_stack *stack)
{
    t_stack *current;
    t_stack *temp;
    int index;

    current = stack;
    while (current)
    {
        index = 0;
        temp = stack;
        while (temp)
        {
            if (temp->value < current->value)
                index++;
            temp = temp->next;
        }
        current->index = index;
        current = current->next;
    }
}