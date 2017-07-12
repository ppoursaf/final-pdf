/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 16:49:23 by ppoursaf          #+#    #+#             */
/*   Updated: 2016/11/17 01:36:54 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		a;
	int		b;
	int		c;
	char	*str;

	a = 0;
	str = (char *)big;
	if (little[0] == '\0')
		return (str);
	while (str[a] != '\0')
	{
		b = 0;
		c = a;
		while (little[b] == str[c])
		{
			c++;
			b++;
			if (little[b] == '\0')
				return (&str[a]);
		}
		a++;
	}
	return (NULL);
}
