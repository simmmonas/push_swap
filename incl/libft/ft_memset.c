/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ssemanco <ssemanco@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 15:45:52 by ssemanco      #+#    #+#                 */
/*   Updated: 2020/11/11 15:45:54 by ssemanco      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*string;
	unsigned char	value;

	i = 0;
	string = str;
	value = c;
	while (i < len)
	{
		string[i] = value;
		i++;
	}
	return (str);
}
