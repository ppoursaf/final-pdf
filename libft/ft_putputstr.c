/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putputstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <ppoursaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 02:40:13 by ppoursaf          #+#    #+#             */
/*   Updated: 2017/04/29 20:52:09 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putputstr(char **str)
{
	int a;

	a = 0;
	while (str[a])
	{
		ft_putstr(str[a]);
		ft_putchar('\n');
		a++;
	}
}