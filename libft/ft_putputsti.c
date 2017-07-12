/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putputsti.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <ppoursaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 16:48:19 by ppoursaf          #+#    #+#             */
/*   Updated: 2017/07/04 04:08:29 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putputsti(int **str)
{
	int a;
	int b;

	a = 0;
	while (str[a])
	{
		b = 0;
		while (b < 10)
		{
			ft_putnbr(str[a][b]);
			ft_putstr("  ");
			b++;
		}
		ft_putchar('\n');
		a++;
	}
}
