/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:00:28 by ppoursaf          #+#    #+#             */
/*   Updated: 2016/11/16 21:48:21 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strdup(char *s1)
{
	int		a;
	int		b;
	char	*s2;

	a = 0;
	b = 0;
	while (s1[a] != '\0')
		a++;
	s2 = (char*)malloc(sizeof(*s2) * (a + 1));
	if (s2 == NULL)
		return (NULL);
	while (b < a)
	{
		s2[b] = s1[b];
		b++;
	}
	s2[b] = '\0';
	return (s2);
}
