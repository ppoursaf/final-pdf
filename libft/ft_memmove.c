/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 18:44:50 by ppoursaf          #+#    #+#             */
/*   Updated: 2016/11/17 06:21:06 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp;
	unsigned char	*tmp2;
	int				b;

	tmp = (unsigned char *)dst;
	tmp2 = (unsigned char *)src;
	b = 1;
	if (tmp > tmp2)
	{
		while (b <= len)
		{
			tmp[len - b] = tmp2[len - b];
			b++;
		}
	}
	else
	{
		b = 0;
		while (b < len)
		{
			tmp[b] = tmp2[b];
			b++;
		}
	}
	return (tmp);
}
