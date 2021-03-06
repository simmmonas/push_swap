/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ssemanco <ssemanco@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 15:26:03 by ssemanco      #+#    #+#                 */
/*   Updated: 2020/11/11 15:26:11 by ssemanco      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c > 64 && c < 91) || (c > 96 && c < 123)) || (c > 47 && c < 58))
		return (1);
	else
		return (0);
}
