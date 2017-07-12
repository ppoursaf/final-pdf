/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <ppoursaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 01:07:22 by ppoursaf          #+#    #+#             */
/*   Updated: 2017/07/12 02:42:02 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	draw_that_bitch(t_swag *sw)
{
	double	dx;
	double	dy;
	double	x;
	double	y;
	double	temp;

	x = (double)sw->ax;
	y = (double)sw->ay;
	dx = sw->bx - sw->ax;
	dy = sw->by - sw->ay;
	temp = sqrt((dx * dx) + (dy * dy));
	dx /= temp;
	dy /= temp;
	while (temp >= 0)
	{
		mlx_put_pixel_to_img(x, y, sw);
		x += dx;
		y += dy;
		temp -= 1;
	}
}

void	ft_put_pixel(t_swag *sw)
{
	int z;
	int y;

	z = 0;
	y = 0;
	while (z < (sw->stop - 1))
	{
		while (y < sw->cpt)
		{
			if (sw->ytab[z][y + 1] && sw->ytab[z][y + 1] != '\0')
				ft_line(sw, z, y);
			if (sw->ytab[z + 1][y] && sw->ytab[z + 1] != NULL)
				ft_column(sw, z, y);
			y++;
		}
		y = 0;
		z++;
	}
	y = -1;
	while (y++ < sw->cpt && sw->ytab[z][y + 1] != '\0')
		ft_line(sw, z, y);
}

void	ft_new_line(t_swag *sw, char *line)
{
	sw->stop++;
	sw->line = NULL;
	free(sw->line);
}

void	number_of_number(char *argv, t_swag *sw)
{
	int		g;
	int		a;

	a = 0;
	g = -1;
	ft_open(sw, argv);
	if (sw->fd <= 0)
	{
		ft_putstr("NTM T UN BOLOSS\n");
		exit(EXIT_SUCCESS);
	}
	while (get_next_line(sw->fd, &sw->line))
	{
		if (g++ == 0)
		{
			while (sw->line[a] != '\0')
			{
				if (sw->line[a] == ' ')
					a++;
				else
				{
					sw->cpt += 1;
					while (sw->line[a] != ' ' && sw->line[a])
						a++;
				}
			}
		}
		ft_new_line(sw, sw->line);
	}
}

int		main(int argc, char **argv)
{
	t_swag	*sw;

	if (argc == 2)
	{
		if (!(sw = (t_swag *)malloc(sizeof(t_swag))))
			return (-1);
		sw->x = 200;
		sw->alt = 0;
		sw->y = 600;
		sw->color = 0x00FFFFFF;
		sw->zoomp = 10;
		sw->argv = ft_strdup(argv[1]);
		sw->width = 2000;
		sw->height = 1500;
		sw->mlx = mlx_init();
		sw->win = mlx_new_window(sw->mlx, sw->width, sw->height, "zizi violet");
		ft_join_everything(sw, sw->argv);
		mlx_key_hook(sw->win, my_first_bonus, sw);
		mlx_loop(sw->mlx);
	}
	else
		ft_putstr("BAD FILE. CHANGE IT MTF \n");
	return (0);
}
