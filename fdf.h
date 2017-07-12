/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoursaf <ppoursaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 22:55:19 by ppoursaf          #+#    #+#             */
/*   Updated: 2017/07/12 02:42:19 by ppoursaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# define ESC	53
# define UP		126
# define DOWN	125
# define RIGHT	124
# define LEFT	123
# define RED	15
# define GREEN	9
# define YELLOW	38
# define PLUS	69
# define MOINS	78

# include "libft/libft.h"
# include "minilibx/mlx.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <math.h>
# include <string.h>

typedef struct			s_swag
{
	void				*mlx;
	void				*win;
	void				*img;
	char				*data;
	int					bpp;
	int					size_l;
	int					endian;
	int					up;
	int					right;
	int					left;
	int					down;
	int					color;
	int					**map;
	int					x;
	int					y;
	int					alt;
	int					stop;
	int					**xtab;
	int					**ytab;
	int					cpt;
	int					width;
	int					height;
	char				**tab;
	int					**realtab;
	int					xmax;
	int					ymax;
	int					fd;
	int					ret;
	char				*line;
	int					ax;
	int					bx;
	int					ay;
	int					by;
	int					i;
	int					b;
	int					c;
	int					zoomp;
	int					zooml;
	char				*argv;
}						t_swag;

void					mlx_put_pixel_to_img(int x, int y, t_swag *sw);
void					ft_put_pixel(t_swag *sw);
void					draw_that_bitch(t_swag *sw);
void					ft_line(t_swag *sw, int z, int y);
void					ft_column(t_swag *sw, int z, int y);
void					number_of_number(char *argv, t_swag *sw);
void					get_map(t_swag *sw, char *argv);
void					get_da_double_char(t_swag *sw, char *argv);
void					get_da_mf_double_int(t_swag *sw);
void					ft_putswag(t_swag *sw);
void					ft_open(t_swag *sw, char *argv);
void					ft_rely(t_swag *sw);
void					ft_relx(t_swag *sw);
void					get_da_double_char_nxt(t_swag *sw, char *argv);
void					ft_join_everything(t_swag *sw, char *argv);
int						my_key_funct(int keycode, void *param);
int						my_first_bonus(int keycode, t_swag *sw);

#endif
