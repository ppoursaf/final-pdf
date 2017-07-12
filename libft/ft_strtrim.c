/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 17:52:05 by ppoursaf          #+#    #+#             */
/*   Updated: 2016/11/25 17:51:31 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*res;
	int		a;
	int		len;
	int		b;

	a = 0;
	b = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	while (s[len - 1] == '\n' || s[len - 1] == '\t' || s[len - 1] == ' ')
		len--;
	while (s[a] == '\n' || s[a] == '\t' || s[a] == ' ')
	{
		a++;
		len--;
	}
	if (len <= 0)
		len = 0;
	if (!(res = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (b < len)
		res[b++] = s[a++];
	res[b] = '\0';
	return (res);
}
