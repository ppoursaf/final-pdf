/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 06:41:10 by ppoursaf          #+#    #+#             */
/*   Updated: 2016/11/17 18:35:26 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;
	int		a;

	a = 0;
	mem = (void*)malloc(sizeof(void*) * size);
	if (mem == 0)
		return (NULL);
	while (a < size)
	{
		mem[a] = 0;
		a++;
	}
	return (mem);
}
