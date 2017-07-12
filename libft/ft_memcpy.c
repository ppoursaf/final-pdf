/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 00:15:00 by ppoursaf          #+#    #+#             */
/*   Updated: 2016/11/13 14:29:24 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		a;
	char	*c1;
	char	*c2;

	c1 = (char *)dest;
	c2 = (char *)src;
	a = 0;
	if (n == 0 || c1 == c2)
		return (c1);
	while (n > a)
	{
		c1[a] = c2[a];
		a++;
	}
	return (c1);
}
