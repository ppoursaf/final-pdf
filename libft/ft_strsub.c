/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 00:12:03 by ppoursaf          #+#    #+#             */
/*   Updated: 2016/11/24 21:28:04 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	a;
	char	*res;

	a = 0;
	p = (char *)s;
	if (s == NULL)
		return (NULL);
	if (start > (unsigned int)ft_strlen(p))
		return (NULL);
	res = (char *)malloc((len + 1) * (sizeof(char)));
	if (res == NULL)
		return (NULL);
	while (a < len && p[start] != '\0')
	{
		res[a] = p[start];
		start++;
		a++;
	}
	res[a] = '\0';
	return (res);
}
