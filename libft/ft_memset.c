/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/14 17:14:43 by username         #+#    #+#              */
/*   Updated: 2026/10/31 12:18:04 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	// printf("%d", ft_strlen("fgkjfk"));
// 	unsigned char	s[] = "aaaaaaa";

// 	ft_memset(s, 50, 5);
// 	printf("%s\n", s);
// }
