/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhimi <brhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 09:08:44 by brhimi            #+#    #+#             */
/*   Updated: 2026/11/09 09:08:47 by brhimi           ###   ########.fr       */
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
