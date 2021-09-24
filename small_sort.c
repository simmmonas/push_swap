/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   small_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ssemanco <ssemanco@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/15 16:15:31 by ssemanco      #+#    #+#                 */
/*   Updated: 2021/09/24 14:40:23 by ssemanco      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "incl/push_swap.h"

void	sort_3arg(t_stack **a_stack)
{
	int	a;
	int	b;
	int	c;

	a = (*a_stack)->val;
	b = (*a_stack)->next->val;
	c = (*a_stack)->next->next->val;
	if (a > b && b < c && a < c)
		sa(a_stack);
	else if (a > b && b > c)
	{
		sa(a_stack);
		rra(a_stack);
	}
	else if (a > b && a > c)
		ra(a_stack);
	else if (a < b && a < c)
	{
		sa(a_stack);
		ra(a_stack);
	}
	else if (a < b && a > c)
		rra(a_stack);
}

void	push_biggest(t_stack **a_stack, t_stack **b_stack)
{
	int	num;
	int	index;
	int	*arr1;
	int	*arr2;

	arr1 = stack_to_array(*a_stack);
	num = get_biggest(arr1, 5);
	arr2 = s_to_a(*a_stack);
	index = get_index(num, arr2, 5);
	while ((*a_stack)->val != num)
	{
		if (index > 2)
			rra(a_stack);
		else
			ra(a_stack);
	}
	pb(a_stack, b_stack);
	free(arr1);
	free(arr2);
}

void	push_smallest(t_stack **a_stack, t_stack **b_stack)
{
	int	num;
	int	index;
	int	*arr3;
	int	*arr4;

	arr3 = stack_to_array(*a_stack);
	num = get_smallest(arr3, 4);
	arr4 = s_to_a(*a_stack);
	index = get_index(num, arr4, 4);
	while ((*a_stack)->val != num)
	{
		if (index > 1)
			rra(a_stack);
		else
			ra(a_stack);
	}
	if ((*a_stack)->val == num)
		pb(a_stack, b_stack);
	free(arr3);
	free(arr4);
}

void	sort_5arg(t_stack **a_stack, t_stack **b_stack)
{
	push_biggest(a_stack, b_stack);
	push_smallest(a_stack, b_stack);
	sort_3arg(a_stack);
	pa(a_stack, b_stack);
	pa(a_stack, b_stack);
	ra(a_stack);
}

void	small_sort(t_stack **a_stack, t_stack **b_stack, int argc)
{
	if (argc == 3)
	{
		if (check_order(*a_stack) == 0)
			return ;
		else
			sa(a_stack);
	}
	if (argc == 4)
	{
		sort_3arg(a_stack);
	}
	if (argc == 5)
		radix_sort(a_stack, b_stack);
	if (argc == 6)
		sort_5arg(a_stack, b_stack);
}
