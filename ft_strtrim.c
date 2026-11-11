/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhimi <brhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 09:14:03 by brhimi            #+#    #+#             */
/*   Updated: 2026/11/09 09:14:04 by brhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*s;
	size_t	len;

	len = 0;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	while (s1[i] && in_set(s1[i], set))
		i++;
	while (len > i && in_set(s1[len - 1], set))
		len--;
	s = malloc((len - i) + 1);
	if (s == 0)
		return (NULL);
	j = 0;
	while (i < len)
		s[j++] = s1[i++];
	s[j] = '\0';
	return (s);
}
