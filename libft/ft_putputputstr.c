/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putputputstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <ppoursaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 20:52:15 by ppoursaf          #+#    #+#             */
/*   Updated: 2017/04/29 20:53:23 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putputputstr(char ***str)
{
	int a;

	a = 0;
	while (str[a])
	{
		ft_putputstr(str[a]);
		ft_putchar('\n');
		a++;
	}
}
