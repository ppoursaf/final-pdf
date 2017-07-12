/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 18:20:44 by ppoursaf          #+#    #+#             */
/*   Updated: 2016/11/10 19:01:44 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	int				a;
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	a = 0;
	while (len > a)
	{
		tmp[a] = (unsigned char)c;
		a++;
	}
	return (s);
}
