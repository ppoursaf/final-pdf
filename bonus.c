/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <ppoursaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 00:08:44 by ppoursaf          #+#    #+#             */
/*   Updated: 2017/07/12 03:32:57 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	mlx_put_pixel_to_img(int x, int y, t_swag *sw)
{
	long pos;

	if (x < 2000 && y < 1500 && x > 0 && y > 0)
	{
		pos = (x * 4 + y * sw->size_l);
		sw->data[pos] = sw->color;
		sw->data[pos + 1] = sw->color >> 8;
		sw->data[pos + 2] = sw->color >> 16;
	}
}

void	ft_line(t_swag *sw, int z, int y)
{
	sw->ax = sw->xtab[z][y];
	sw->bx = sw->xtab[z][y + 1];
	sw->ay = sw->ytab[z][y];
	sw->by = sw->ytab[z][y + 1];
	draw_that_bitch(sw);
}

void	ft_column(t_swag *sw, int z, int y)
{
	sw->ax = sw->xtab[z][y];
	sw->bx = sw->xtab[z + 1][y];
	sw->ay = sw->ytab[z][y];
	sw->by = sw->ytab[z + 1][y];
	draw_that_bitch(sw);
}

void	ft_join_everything(t_swag *sw, char *argv)
{
	sw->img = mlx_new_image(sw->mlx, sw->width, sw->height);
	sw->data = mlx_get_data_addr(sw->img, &sw->bpp, &sw->size_l, &sw->endian);
	sw->cpt = 0;
	sw->stop = 0;
	number_of_number(argv, sw);
	get_da_double_char(sw, argv);
	ft_rely(sw);
	free(sw->realtab);
	ft_relx(sw);
	ft_put_pixel(sw);
	mlx_put_image_to_window(sw->mlx, sw->win, sw->img, 0, 0);
	free(sw->xtab);
	free(sw->ytab);
}

int		my_first_bonus(int keycode, t_swag *sw)
{
	ft_putstr("keycode");
	ft_putnbr(keycode);
	if (keycode == ESC)
		exit(EXIT_SUCCESS);
	else if (keycode == 126)
		sw->y -= 10;
	else if (keycode == 125)
		sw->y += 10;
	else if (keycode == RIGHT)
		sw->x += 10;
	else if (keycode == LEFT)
		sw->x -= 10;
	else if (keycode == RED)
		sw->color = 0x00FF0000;
	else if (keycode == YELLOW)
		sw->color = 0x00FFFF00;
	else if (keycode == GREEN)
		sw->color = 0x008000;
	else if (keycode == PLUS)
		sw->zoomp += 5;
	else if (keycode == MOINS)
		sw->zoomp -= 5;
	else if (keycode == 91)
		sw->alt += 5;
	else if (keycode == 84)
		sw->alt -= 5;
	ft_join_everything(sw, sw->argv);
	return (0);
}
