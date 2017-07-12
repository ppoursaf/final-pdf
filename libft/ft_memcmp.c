/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 20:03:59 by ppoursaf          #+#    #+#             */
/*   Updated: 2016/11/15 16:51:20 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			a;
	unsigned char	*c1;
	unsigned char	*c2;

	a = 0;
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	if (c1 == NULL && c2 == NULL && n == 0)
		return (0);
	while (a < n)
	{
		if (c1[a] != c2[a])
			return (c1[a] - c2[a]);
		a++;
	}
	return (0);
}
