/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ssemanco <ssemanco@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 17:11:06 by ssemanco      #+#    #+#                 */
/*   Updated: 2021/09/24 14:47:45 by ssemanco      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*dest;
	const char		*string;

	i = 0;
	dest = dst;
	string = src;
	if (dst == NULL && src == NULL)
		return (dst);
	while (i < n)
	{
		dest[i] = string[i];
		i++;
	}
	return (dst);
}
