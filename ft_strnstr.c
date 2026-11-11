/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhimi <brhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 09:13:53 by brhimi            #+#    #+#             */
/*   Updated: 2026/11/09 09:13:54 by brhimi           ###   ########.fr       */
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
		if (little[s] == '\0')
			return ((char *) & big[i]);
		i++;
	}
	return (NULL);
}
