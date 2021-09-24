/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parser.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ssemanco <ssemanco@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/16 22:46:59 by ssemanco      #+#    #+#                 */
/*   Updated: 2021/09/24 14:10:12 by ssemanco      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "incl/push_swap.h"

int	evaluate_argument(char *arg)
{
	int	i;

	i = 0;
	while (arg[i] != '\0')
	{
		if (arg[i] == '-' && i == 0)
			i++;
		if (ft_isdigit(arg[i]) == 0)
			return (ERROR);
		i++;
	}
	return (OK);
}

t_stack	*parser(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		if (evaluate_argument(argv[i]) == ERROR)
			return (NULL);
		if (ft_atoi(argv[i]) == -1 && ft_strcmp(argv[i], "-1") != 0)
			return (NULL);
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (NULL);
			j++;
		}
		i++;
	}
	return (create_list(argc, argv));
}
