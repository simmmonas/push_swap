/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ssemanco <ssemanco@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/24 23:29:00 by ssemanco      #+#    #+#                 */
/*   Updated: 2021/09/23 14:48:00 by ssemanco      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "incl/push_swap.h"

void	sort_algo(t_stack **a_stack, t_stack **b_stack, int max_bits, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*a_stack)->index >> i) & 1) == 1)
			{
				ra(a_stack);
			}
			else
			{
				pb(a_stack, b_stack);
			}
			j++;
		}
		while (*b_stack)
		{
			pa(a_stack, b_stack);
		}
		i++;
	}
}

void	radix_sort(t_stack **a_stack, t_stack **b_stack)
{
	int	size;
	int	max_num;
	int	max_bits;

	size = count_stack(*a_stack);
	max_num = size - 1;
	max_bits = 0;
	assign_index(*a_stack);
	while ((max_num >> max_bits) != 0)
		max_bits++;
	sort_algo(a_stack, b_stack, max_bits, size);
}
