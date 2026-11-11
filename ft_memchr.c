/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhimi <brhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 09:11:51 by brhimi            #+#    #+#             */
/*   Updated: 2026/11/09 09:11:53 by brhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *) s;
	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (p[i] != (unsigned char) c)
			i++;
		else
			return (&p[i]);
	}
	return (NULL);
}
