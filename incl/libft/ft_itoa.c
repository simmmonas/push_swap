/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ssemanco <ssemanco@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 15:30:38 by ssemanco      #+#    #+#                 */
/*   Updated: 2021/09/24 14:55:17 by ssemanco      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int n)
{
	int				i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 10)
	{
		n = n / 10;
		i++;
	}
	if (n < 10)
		i++;
	return (i);
}

static void	nb_conv(char *str, int n, int *i)
{
	unsigned int	nb;

	nb = n;
	if (n < 0)
	{
		str[*i] = '-';
		*i = (*i) + 1;
		nb = -n;
	}
	if (nb >= 10)
	{
		nb_conv(str, nb / 10, i);
		nb_conv(str, nb % 10, i);
	}
	if (nb < 10)
	{
		str[*i] = nb + '0';
		*i = (*i) + 1;
	}
}

char	*ft_itoa(int n)
{
	char			*str;
	int				index;
	int				*i;

	i = &index;
	index = 0;
	str = (char *)malloc(sizeof(char) * (get_len(n) + 1));
	if (!str)
		return (NULL);
	if (str)
	{
		nb_conv(str, n, i);
		str[index] = '\0';
	}
	return (str);
}
