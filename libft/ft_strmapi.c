/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 23:23:22 by ppoursaf          #+#    #+#             */
/*   Updated: 2016/11/25 03:19:48 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mal;
	char	*p;
	int		a;
	int		b;

	if (!s || !f)
		return (NULL);
	p = (char *)s;
	a = ft_strlen(p);
	b = 0;
	if (p != NULL && f != NULL && a != 0)
	{
		mal = (char *)malloc(sizeof(*mal) * (a + 1));
		if (mal == NULL)
			return (NULL);
		while (p[b])
		{
			mal[b] = f(b, p[b]);
			b++;
		}
		mal[b] = '\0';
		return (mal);
	}
	return (NULL);
}
