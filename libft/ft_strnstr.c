/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/17 11:20:32 by username         #+#    #+#              */
/*   Updated: 2026/10/31 13:12:35 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	s;

	i = 0;
	if (ft_strlen(little) == 0)
		return ((char *) big);
	while (big[i] && i < len)
	{
		s = 0;
		while (little[s] && i + s < len && little[s] == big[i + s])
			s++;
		if ((little[s] == '\0' || little[s] != little[s]))
			return ((char *) & big[i]);
		i++;
	}
	return (NULL);
}
