/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 18:14:45 by ppoursaf          #+#    #+#             */
/*   Updated: 2016/11/16 23:39:24 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		a;
	char	*p;
	char	pd;

	a = 0;
	p = (char *)s;
	pd = (char)c;
	while (p[a] != '\0' && p[a] != pd)
	{
		if (p[a] == pd)
			return (&p[a]);
		a++;
	}
	if (pd == p[a])
		return (&p[a]);
	return (NULL);
}
