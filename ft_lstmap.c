/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhimi <brhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 09:09:25 by brhimi            #+#    #+#             */
/*   Updated: 2026/11/09 09:09:27 by brhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*d)(void *))
{
	t_list	*new;
	t_list	*newlist;
	void	*content;

	newlist = NULL;
	if (f == NULL)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		new = ft_lstnew(content);
		if (new == NULL)
		{
			if (d)
				d(content);
			ft_lstclear(&newlist, d);
			return (NULL);
		}
		ft_lstadd_back(&newlist, new);
		lst = lst->next;
	}
	return (newlist);
}
