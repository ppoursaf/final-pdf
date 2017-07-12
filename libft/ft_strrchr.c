/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 18:24:33 by ppoursaf          #+#    #+#             */
/*   Updated: 2016/11/25 02:47:51 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		a;

	a = ft_strlen((char *)s);
	while (0 != a && s[a] != (char)c)
		a--;
	if (s[a] == (char)c)
		return ((char *)&s[a]);
	return (NULL);
}
