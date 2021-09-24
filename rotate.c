/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ssemanco <ssemanco@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/19 15:11:50 by ssemanco      #+#    #+#                 */
/*   Updated: 2021/09/16 23:16:01 by ssemanco      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "incl/push_swap.h"

void	ra(t_stack **a_stack)
{
	t_stack	*first;
	t_stack	*last;

	if (count_stack(*a_stack) < 2 )
		return ;
	last = *a_stack;
	first = (*a_stack)->next;
	while ((*a_stack)->next)
		*a_stack = (*a_stack)->next;
	(*a_stack)->next = last;
	last->next = NULL;
	*a_stack = first;
	write(1, "ra\n", 3);
}

void	rb(t_stack **b_stack)
{
	t_stack	*first;
	t_stack	*last;

	if (count_stack(*b_stack) < 2 )
		return ;
	last = *b_stack;
	first = (*b_stack)->next;
	while ((*b_stack)->next)
		*b_stack = (*b_stack)->next;
	(*b_stack)->next = last;
	last->next = NULL;
	*b_stack = first;
	write(1, "rb\n", 3);
}

void	rr(t_stack **a_stack, t_stack **b_stack)
{
	ra(a_stack);
	rb(b_stack);
	write(1, "rr\n", 3);
}
