/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/14 22:17:09 by username         #+#    #+#              */
/*   Updated: 2026/10/31 12:40:37 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	c = (char) c;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *) & s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *) & s[i]);
	return (NULL);
}
