/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ssemanco <ssemanco@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 15:46:41 by ssemanco      #+#    #+#                 */
/*   Updated: 2021/09/24 14:49:05 by ssemanco      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countw(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}

static void	free_arr(char **arr, int len)
{
	int			i;

	i = 0;
	while (i < len)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char	*ft_strndup(const char *s1, size_t n)
{
	char		*copy;
	size_t		i;

	i = 0;
	copy = (char *)malloc(sizeof(char) * n + 1);
	if (copy == 0)
	{
		free(copy);
		return (NULL);
	}
	while (s1[i] && i < n)
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

static int	fill_arr(char **arr, char const *s, char c)
{
	int			i;
	int			j;
	int			k;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			arr[k] = ft_strndup(s + j, i - j);
			if (!arr[k])
				return (-1);
			k++;
		}
	}
	arr[k] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char		**arr;
	int			i;
	int			count;

	i = 0;
	if (!s)
		return (NULL);
	count = ft_countw(s, c);
	arr = (char **)malloc(sizeof(char *) * (count + 1));
	if (arr == 0)
		return (NULL);
	if (fill_arr(arr, s, c) == -1)
	{
		free_arr(arr, count);
		return (NULL);
	}
	return (arr);
}
