/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ssemanco <ssemanco@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 15:32:43 by ssemanco      #+#    #+#                 */
/*   Updated: 2021/09/24 14:45:16 by ssemanco      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*n;

	if (lst)
	{
		while (*lst)
		{
			n = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = n;
		}
	}
}
