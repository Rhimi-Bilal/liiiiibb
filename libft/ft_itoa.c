/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 18:50:47 by username         #+#    #+#              */
/*   Updated: 2026/10/31 12:17:11 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int i)
{
	int		c;
	long	nb;

	nb = i;
	c = 0;
	if (nb < 0)
		nb = -nb;
	while (nb >= 10)
	{
		nb = nb / 10;
		c++;
	}
	return (c + 1);
}

char	*ft_itoa(int n)
{
	char	*s;
	long	nb;
	size_t	i;
	size_t	len;

	nb = n;
	i = ft_count(n);
	len = i + (nb < 0);
	s = malloc(len + 1);
	if (s == 0)
		return (NULL);
	s[len] = '\0';
	if (nb < 0)
		nb = -nb;
	while (i > 0)
	{
		s[--len] = (nb % 10) + '0';
		nb = nb / 10;
		i--;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}
