/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 23:46:58 by ppoursaf          #+#    #+#             */
/*   Updated: 2016/11/25 03:09:59 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int a;

	a = 0;
	if (!s1 && !s2)
		return (1);
	if (!s1 || !s2)
		return (0);
	while (s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0')
		a++;
	if (s1[a] == '\0' && s2[a] == '\0')
		return (1);
	return (0);
}