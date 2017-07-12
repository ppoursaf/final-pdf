/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 17:40:18 by ppoursaf          #+#    #+#             */
/*   Updated: 2016/11/25 03:43:05 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	unsigned int	a;

	a = 0;
	while (a < len)
	{
		if (s1[a] != s2[a])
			return ((unsigned char)s1[a]) - ((unsigned char)s2[a]);
		if (s1[a] == '\0')
			return (0);
		a++;
	}
	return (0);
}
