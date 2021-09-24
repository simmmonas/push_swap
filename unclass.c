/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   unclass.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ssemanco <ssemanco@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 16:33:02 by ssemanco      #+#    #+#                 */
/*   Updated: 2021/09/20 17:32:40 by ssemanco      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "incl/push_swap.h"

int	get_smallest(int *arr, int size)
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
	return (arr[0]);
}

int	get_biggest(int *arr, int size)
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
	return (arr[4]);
}
