/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 19:01:53 by ppoursaf          #+#    #+#             */
/*   Updated: 2016/11/17 18:33:52 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, int n)
{
	unsigned char	*tmp;
	int				a;

	tmp = (unsigned char *)s;
	a = 0;
	while (a < n)
	{
		tmp[a] = (unsigned char)0;
		a++;
	}
}
