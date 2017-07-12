/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 19:25:36 by ppoursaf          #+#    #+#             */
/*   Updated: 2016/11/26 19:08:08 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_swag(char const *s, char c)
{
	int	a;
	int	cpt;

	cpt = 0;
	a = 0;
	if (!s)
		return (0);
	while (s[a])
	{
		if (s[a] != c && (s[a + 1] == c || s[a + 1] == '\0'))
			cpt++;
		a++;
	}
	return (cpt);
}

static int		ft_fdp(char const *s, char c)
{
	int		len;

	len = 0;
	if (!s)
		return (0);
	while (*s != '\0' && *s != c)
	{
		s++;
		len++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tmp;
	int		cpt;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	cpt = ft_swag(s, c);
	tmp = (char **)malloc(sizeof(char *) * (cpt + 1));
	if (tmp == NULL)
		return (NULL);
	while (cpt--)
	{
		while (*s == c && *s != '\0')
			s++;
		tmp[i] = ft_strsub(s, 0, ft_fdp(s, c));
		if (!tmp[i])
			return (NULL);
		while (*s != c && *s != '\0')
			s++;
		i++;
	}
	tmp[i] = NULL;
	return (tmp);
}
