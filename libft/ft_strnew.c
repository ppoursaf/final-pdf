/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 18:47:52 by ppoursaf          #+#    #+#             */
/*   Updated: 2016/11/19 17:52:19 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	int		a;

	a = 0;
	str = (char*)malloc(size + 1);
	if (str == NULL)
		return (NULL);
	while (str[a] != '\0')
	{
		str[a] = '\0';
		a++;
	}
	return (str);
}
