/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   index_help.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ssemanco <ssemanco@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/08 15:18:17 by ssemanco      #+#    #+#                 */
/*   Updated: 2021/09/20 18:33:09 by ssemanco      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "incl/push_swap.h"
#include <stdio.h>

void	get_sorted(int *arr, int size)
{
	int	i;
	int	j;
	int	temp;

	temp = 0;
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	get_index(int num, int *arr, int size)
{
	int	i;

	i = 0;
	while (i <= size)
	{
		if (num == arr[i])
			return (i);
		i++;
	}
	return (ERROR);
}

void	assign_index(t_stack *stack)
{
	int	*arr;
	int	size;

	arr = stack_to_array(stack);
	size = count_stack(stack);
	while (stack->next != NULL)
	{
		stack->index = get_index(stack->val, arr, size);
		stack = stack->next;
	}
	stack->index = get_index(stack->val, arr, size);
	free(arr);
}

int	*s_to_a(t_stack *stack)
{
	int			*array;
	int			i;
	int			size;
	t_stack		*temp;

	size = count_stack(stack);
	i = 0;
	if (stack == NULL)
		return (NULL);
	array = (int *)malloc(sizeof(int) * size + 1);
	if (array == NULL)
		return (NULL);
	temp = stack;
	while (temp)
	{
		array[i] = temp->val;
		temp = temp->next;
		i++;
	}
	return (array);
}

int	*stack_to_array(t_stack *stack)
{
	int			*array;
	int			i;
	int			size;
	t_stack		*temp;

	size = count_stack(stack);
	i = 0;
	if (stack == NULL)
		return (NULL);
	array = (int *)malloc(sizeof(int) * size + 1);
	if (array == NULL)
		return (NULL);
	temp = stack;
	while (temp)
	{
		array[i] = temp->val;
		temp = temp->next;
		i++;
	}
	get_sorted(array, size);
	return (array);
}
