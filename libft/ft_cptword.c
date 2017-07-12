/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cptword.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 19:56:26 by ppoursaf          #+#    #+#             */
/*   Updated: 2016/11/26 21:49:10 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_cptword(char const *s, char c)
{
	int a;
	int cpt;

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