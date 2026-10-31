/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/14 17:14:30 by username         #+#    #+#              */
/*   Updated: 2026/10/31 12:17:37 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *) dest;
	s = (const char *) src;
	i = 0;
	if (!dest && !src)
		return (0);
	if (n == 0 || (dest == src))
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
