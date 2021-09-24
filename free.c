/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   free.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ssemanco <ssemanco@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/16 15:57:57 by ssemanco      #+#    #+#                 */
/*   Updated: 2021/09/24 14:27:26 by ssemanco      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "incl/push_swap.h"

void	free_stack(t_stack *stack)
{
	t_stack	*tmp;

	while (stack != NULL)
	{
		tmp = stack;
		stack = stack->next;
		if (tmp)
			free(tmp);
	}
	stack = NULL;
}

int	malloc_stack_fail(void)
{
	write(2, "Malloc Error\n", 6);
	exit(EXIT_FAILURE);
}
