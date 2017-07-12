/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 17:38:05 by ppoursaf          #+#    #+#             */
/*   Updated: 2016/11/25 17:45:27 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	int		b;
	int		c;
	char	*fin;

	a = 0;
	c = 0;
	if (!s1 || !s2)
		return (NULL);
	b = ft_strlen(s1) + ft_strlen(s2);
	if (!(fin = (char *)malloc((b + 1) * sizeof(char))))
		return (NULL);
	while (s1[a] != '\0')
	{
		fin[a] = s1[a];
		a++;
	}
	while (s2[c] != '\0')
	{
		fin[a] = s2[c];
		a++;
		c++;
	}
	fin[a] = '\0';
	return (fin);
}
