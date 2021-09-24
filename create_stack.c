/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   create_stack.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ssemanco <ssemanco@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 15:19:24 by ssemanco      #+#    #+#                 */
/*   Updated: 2021/09/24 14:39:00 by ssemanco      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "incl/push_swap.h"

void	set_item_val(t_stack *item, int value)
{
	item->val = value;
	item->next = NULL;
}

int	create_stack(t_stack **stack, t_stack **cursor, int value)
{
	*stack = malloc(sizeof(t_stack));
	if (*stack == NULL)
		return (ERROR);
	*cursor = *stack;
	set_item_val(*stack, value);
	return (OK);
}

t_stack	*create_list(int argc, char **argv)
{
	t_stack	*stack;
	t_stack	*cursor;
	t_stack	*tmp;
	int		i;

	i = 1;
	if (create_stack(&stack, &cursor, ft_atoi(argv[i])) == ERROR)
		return (NULL);
	i++;
	while (i < argc)
	{
		if (argv[i])
		{
			tmp = malloc(sizeof(t_stack));
			if (tmp == NULL)
				return (NULL);
			set_item_val(tmp, ft_atoi(argv[i]));
			cursor->next = tmp;
			cursor = cursor->next;
		}
		i++;
	}
	return (stack);
}
