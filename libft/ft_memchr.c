/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/17 15:06:47 by username         #+#    #+#              */
/*   Updated: 2026/10/31 12:17:30 by username        ###   ########.fr        */
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
