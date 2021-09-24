/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ssemanco <ssemanco@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/19 16:51:01 by ssemanco      #+#    #+#                 */
/*   Updated: 2021/09/16 22:44:54 by ssemanco      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "incl/push_swap.h"

void	rra(t_stack **a_stack)
{
	t_stack	*first;
	t_stack	*last;
	t_stack	*tmp;

	if (count_stack(*a_stack) < 2)
		return ;
	tmp = *a_stack;
	last = *a_stack;
	while (tmp->next)
	{
		if (!tmp->next->next)
			last = tmp;
		tmp = tmp->next;
	}
	first = tmp;
	first->next = *a_stack;
	last->next = NULL;
	*a_stack = first;
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b_stack)
{
	t_stack	*first;
	t_stack	*last;
	t_stack	*tmp;

	if (count_stack(*b_stack) < 2)
		return ;
	tmp = *b_stack;
	last = *b_stack;
	while (tmp->next)
	{
		if (!tmp->next->next)
			last = tmp;
		tmp = tmp->next;
	}
	first = tmp;
	first->next = *b_stack;
	last->next = NULL;
	*b_stack = first;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a_stack, t_stack **b_stack)
{
	rra(a_stack);
	rrb(b_stack);
	write(1, "rrr\n", 4);
}
