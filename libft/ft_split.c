/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhimi <brhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 11:03:19 by username          #+#    #+#             */
/*   Updated: 2026/11/07 11:38:54 by brhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countword(const char *s, char c)
{
	int	i;
	int	f;
	int	count;

	count = 0;
	i = 0;
	f = 1;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (f == 1)
			{
				count++;
				f = 0;
			}
		}
		else
			f = 1;
		i++;
	}
	return (count);
}

static size_t	wordlen(const char *s, char c, size_t i)
{
	size_t	len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static char	*getword(const char *s, char c, size_t *i)
{
	char	*word;
	size_t	len;
	size_t	j;

	while (s[*i] == c && s[*i])
		(*i)++;
	if (s[*i] == '\0')
		return (NULL);
	len = wordlen(s, c, *i);
	word = malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	j = 0;
	while (j < len)
		word[j++] = s[(*i)++];
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**r;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	r = malloc((countword(s, c) + 1) * sizeof(char *));
	if (r == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < countword(s, c))
	{
		r[j] = getword(s, c, &i);
		if (r[j] == NULL)
		{
			while (j > 0)
				free(r[--j]);
			free(r);
			return (NULL);
		}
		j++;
	}
	r[j] = NULL;
	return (r);
}
