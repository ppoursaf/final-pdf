/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsti.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <ppoursaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 16:45:30 by ppoursaf          #+#    #+#             */
/*   Updated: 2017/06/06 16:48:12 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putsti(int *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		ft_putnbr(str[a]);
		a++;
	}
}