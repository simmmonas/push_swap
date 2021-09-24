/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ssemanco <ssemanco@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/16 22:14:25 by ssemanco      #+#    #+#                 */
/*   Updated: 2021/09/24 14:58:07 by ssemanco      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "incl/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a_stack;
	t_stack	*b_stack;

	if (argc == 1)
		return (0);
	b_stack = NULL;
	a_stack = parser(argc, argv);
	if (a_stack == NULL)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (argc == 2 || check_order(a_stack) == 0)
		return (0);
	else if (argc < 7)
		small_sort(&a_stack, &b_stack, argc);
	else
		radix_sort(&a_stack, &b_stack);
	free_stack(a_stack);
	free_stack(b_stack);
	return (0);
}
