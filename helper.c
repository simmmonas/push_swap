/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   helper.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ssemanco <ssemanco@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/24 23:09:29 by ssemanco      #+#    #+#                 */
/*   Updated: 2021/09/16 23:34:21 by ssemanco      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "incl/push_swap.h"

void	print_stack(t_stack *stack)
{
	if (stack)
	{
		while (stack->next != NULL)
		{
			ft_putstr_fd("the value is: ", 1);
			ft_putnbr_fd(stack->val, 1);
			ft_putstr_fd("\n", 1);
			stack = stack->next;
		}
		ft_putstr_fd("the LAST value is: ", 1);
		ft_putnbr_fd(stack->val, 1);
		ft_putstr_fd("\n", 1);
	}
}

int	check_order(t_stack *stack)
{
	while (stack && stack->val < stack->next->val)
	{
		stack = stack->next;
		if (stack->next == NULL)
			return (0);
	}
	return (-1);
}

int	check_dupl(t_stack *stack, int value)
{
	while (stack)
	{
		if ((stack->val) == value)
			return (1);
		stack = stack->next;
	}
	return (0);
}

int	count_stack(t_stack *stack)
{	
	int	i;

	i = 0;
	if (!stack)
		return (i);
	while (stack->next != NULL)
	{
		i++;
		stack = stack->next;
	}
	i++;
	return (i);
}
