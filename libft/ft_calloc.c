/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/18 11:39:20 by username         #+#    #+#              */
/*   Updated: 2026/10/31 12:16:50 by username        ###   ########.fr        */
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
