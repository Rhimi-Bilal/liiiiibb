/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhimi <brhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 07:29:14 by username          #+#    #+#             */
/*   Updated: 2026/10/30 10:45:15 by brhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*t;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		t = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = t;
	}
}
