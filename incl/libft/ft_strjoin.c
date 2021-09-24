/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ssemanco <ssemanco@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 16:35:32 by ssemanco      #+#    #+#                 */
/*   Updated: 2020/12/08 20:02:55 by simonaseman   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strj;
	int		i;
	int		j;

	if (!s1)
		return (ft_strdup(s2));
	strj = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (strj == NULL || !s2)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		strj[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		strj[i + j] = s2[j];
		j++;
	}
	strj[i + j] = '\0';
	return (strj);
}
