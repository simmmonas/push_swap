/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ssemanco <ssemanco@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 15:36:20 by ssemanco      #+#    #+#                 */
/*   Updated: 2021/09/24 14:47:20 by ssemanco      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	char			*s1;

	i = 0;
	s1 = (char *)s;
	while (i < n)
	{
		if ((unsigned char)s1[i] == (unsigned char)c)
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
