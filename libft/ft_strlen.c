/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlen.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/13 07:09:11 by username         #+#    #+#              */
/*   Updated: 2026/10/31 12:19:40 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		count = count + 1;
		i++;
	}
	return (count);
}
// size_t ft_strlen(const char *s)
// {
//     const char *d = s;
//     while (*s)
//     {

//         s++;
//     }
//     return (s - d);
// }
