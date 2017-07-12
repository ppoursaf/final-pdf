/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 17:53:21 by ppoursaf          #+#    #+#             */
/*   Updated: 2016/11/15 12:42:34 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			a;
	unsigned char	p;

	a = 0;
	c1 = (unsigned char *)dst;
	c2 = (unsigned char *)src;
	p = (unsigned char)c;
	while (a < n)
	{
		c1[a] = c2[a];
		if (c1[a] == p)
		{
			a++;
			return (c1 + a);
		}
		a++;
	}
	return (NULL);
}
