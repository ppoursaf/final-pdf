/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 00:04:27 by ppoursaf          #+#    #+#             */
/*   Updated: 2016/11/25 17:58:25 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, unsigned int n)
{
	int a;

	a = 0;
	if (!s1 || !s2)
		return (0);
	while (a < n && (s1[a] != '\0' || s2[a] != '\0'))
	{
		if (s1[a] != s2[a])
			return (0);
		a++;
	}
	return (1);
}
