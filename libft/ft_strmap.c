/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 18:28:00 by ppoursaf          #+#    #+#             */
/*   Updated: 2016/11/25 17:46:07 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		a;
	char	*p;
	int		b;
	char	*mal;

	if (!s || !f)
		return (NULL);
	p = (char*)s;
	a = ft_strlen(p);
	b = 0;
	if (p && f)
	{
		mal = (char *)malloc((a + 1) * sizeof(*mal));
		if (mal == NULL)
			return (NULL);
		while (p[b] != '\0')
		{
			mal[b] = f(p[b]);
			b++;
		}
		mal[b] = '\0';
		return (mal);
	}
	return (NULL);
}
