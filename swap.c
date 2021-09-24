/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ssemanco <ssemanco@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/17 22:37:54 by ssemanco      #+#    #+#                 */
/*   Updated: 2021/09/23 15:03:41 by ssemanco      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "incl/push_swap.h"

void	sa(t_stack **a_stack)
{
	int	tmp1;
	int	tmp2;

	if (count_stack(*a_stack) > 1 )
	{
		tmp1 = (*a_stack)->val;
		tmp2 = (*a_stack)->next->val;
		(*a_stack)->val = tmp2;
		(*a_stack)->next->val = tmp1;
	}
	write(1, "sa\n", 3);
}

void	sb(t_stack **b_stack)
{
	int	tmp1;
	int	tmp2;

	if (count_stack(*b_stack) > 1 )
	{
		tmp1 = (*b_stack)->val;
		tmp2 = (*b_stack)->next->val;
		(*b_stack)->val = tmp2;
		(*b_stack)->next->val = tmp1;
	}
	write(1, "sb\n", 3);
}

void	ss(t_stack **a_stack, t_stack **b_stack)
{
	sa(a_stack);
	sb(b_stack);
	write(1, "ss\n", 3);
}
