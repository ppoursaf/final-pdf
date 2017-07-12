/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 19:17:19 by ppoursaf          #+#    #+#             */
/*   Updated: 2016/11/15 12:40:54 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				a;
	unsigned char	*c1;
	unsigned char	p;

	c1 = (unsigned char *)s;
	p = (unsigned char)c;
	a = 0;
	while (a < n)
	{
		if (c1[a] == p)
			return (c1 + a);
		a++;
	}
	return (NULL);
}
