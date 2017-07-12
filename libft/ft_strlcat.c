/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 17:16:19 by ppoursaf          #+#    #+#             */
/*   Updated: 2016/11/25 02:26:32 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	c;

	a = 0;
	while (dst[a] != '\0' && a < size)
		a++;
	c = a;
	while (src[a - c] != '\0' && a < size - 1)
	{
		dst[a] = src[a - c];
		a++;
	}
	if (c < size)
		dst[a] = '\0';
	return (c + ft_strlen(src));
}
