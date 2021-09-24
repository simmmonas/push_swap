/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ssemanco <ssemanco@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/17 23:12:01 by ssemanco      #+#    #+#                 */
/*   Updated: 2021/09/20 15:17:16 by ssemanco      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "incl/push_swap.h"

void	pb(t_stack **a_stack, t_stack **b_stack)
{
	t_stack	*tmp;

	if (count_stack(*a_stack) > 0)
	{
		if (b_stack == NULL)
		{
			b_stack = malloc(sizeof(t_stack));
			if (b_stack == NULL)
				malloc_stack_fail();
			(*b_stack)->next = NULL;
		}
		tmp = *a_stack;
		*a_stack = (*a_stack)->next;
		tmp->next = *b_stack;
		*b_stack = tmp;
	}
	else
		return ;
	write(1, "pb\n", 3);
}

void	pa(t_stack **a_stack, t_stack **b_stack)
{
	t_stack	*tmp;

	if (count_stack(*b_stack) > 0)
	{
		tmp = *b_stack;
		*b_stack = (*b_stack)->next;
		tmp->next = *a_stack;
		*a_stack = tmp;
	}
	else
		return ;
	write(1, "pa\n", 3);
}
