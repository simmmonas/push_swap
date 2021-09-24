/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ssemanco <ssemanco@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 15:48:17 by ssemanco      #+#    #+#                 */
/*   Updated: 2021/09/24 14:51:04 by ssemanco      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_chars(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		s;
	int		e;

	if (!s1)
		return (0);
	s = 0;
	while (s1[s] && check_chars(s1[s], set))
		s++;
	e = ft_strlen(s1);
	while (e > s && check_chars(s1[e - 1], set))
		e--;
	str = (char *)malloc(sizeof(*s1) * (e - s + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s < e)
	{
		str[i] = s1[s];
		i++;
		s++;
	}
	str[i] = '\0';
	return (str);
}
