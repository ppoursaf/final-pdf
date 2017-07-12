/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swag.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <ppoursaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:19:00 by ppoursaf          #+#    #+#             */
/*   Updated: 2017/07/12 03:34:37 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_open(t_swag *sw, char *argv)
{
	if (!(sw->fd = open(argv, O_RDONLY)))
		return ;
}

void	ft_relx(t_swag *sw)
{
	int y;
	int x;

	y = 0;
	x = 0;
	sw->xtab = (int**)malloc(sizeof(int*) * (sw->stop + 1));
	while (y < sw->stop)
	{
		sw->xtab[y] = (int*)malloc(sizeof(int) * (sw->cpt + 1));
		sw->xtab[y][sw->cpt] = '\0';
		y++;
	}
	sw->xtab[y] = NULL;
	y = 0;
	while (y < sw->stop)
	{
		while (x < sw->cpt)
		{
			sw->xtab[y][x] = sw->x + (x * (sw->zoomp * 2)) + \
			(y * (sw->zoomp * 2));
			x++;
		}
		y++;
		x = 0;
	}
}

void	ft_rely(t_swag *sw)
{
	int x;
	int y;

	x = 0;
	y = 0;
	sw->ytab = (int**)malloc(sizeof(int*) * (sw->stop + 1));
	while (y < sw->stop)
	{
		sw->ytab[y] = (int *)malloc(sizeof(int) * (sw->cpt + 1));
		sw->ytab[y][sw->cpt] = '\0';
		y++;
	}
	sw->ytab[y] = NULL;
	y = 0;
	while (y < sw->stop)
	{
		while (x < sw->cpt)
		{
			sw->ytab[y][x] = sw->y - (x * sw->zoomp) + (y * sw->zoomp - sw->alt) -\
				(sw->realtab[y][x] * sw->zoomp);
			x++;
		}
		y++;
		x = 0;
	}
}

void	get_da_double_char(t_swag *sw, char *argv)
{
	int		i;
	int		x;
	int		y;
	int		fd;

	i = 0;
	ft_open(sw, argv);
	sw->realtab = (int **)malloc(sizeof(int *) * (sw->stop + 1));
	while (i < sw->stop)
	{
		sw->realtab[i] = (int *)malloc(sizeof(int) * (sw->cpt + 1));
		i++;
	}
	sw->realtab[i] = NULL;
	get_da_double_char_nxt(sw, argv);
}

void	get_da_double_char_nxt(t_swag *sw, char *argv)
{
	sw->i = 0;
	sw->b = 0;
	sw->c = 0;
	while (get_next_line(sw->fd, &sw->line))
	{
		while (sw->line[sw->i] != '\0')
		{
			if (sw->line[sw->i] == ' ')
				sw->i++;
			else
			{
				sw->realtab[sw->c][sw->b] = ft_atoi(&sw->line[sw->i]);
				sw->b++;
				while (sw->line[sw->i] != ' ' && sw->line[sw->i])
					sw->i++;
			}
		}
		sw->i = 0;
		sw->b = 0;
		sw->c++;
		sw->line = NULL;
		free(sw->line);
	}
}
