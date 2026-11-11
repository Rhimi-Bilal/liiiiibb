/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhimi <brhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 09:08:02 by brhimi            #+#    #+#             */
/*   Updated: 2026/11/09 09:17:26 by brhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	size_t			t;
	unsigned char	*p;

	if (size != 0 && (size && nmemb > SIZE_MAX / size))
		return (NULL);
	if (size == 0 || nmemb == 0)
		return (malloc(1));
	i = 0;
	t = nmemb * size;
	p = malloc(t);
	if (!p)
		return (NULL);
	while (i < t)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
