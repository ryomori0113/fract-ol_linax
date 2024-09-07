/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mk_fractol.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:23:43 by ryomori           #+#    #+#             */
/*   Updated: 2024/06/24 13:15:57 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	mk_julia(double cre, double cim)
{
	t_elemt	elemt;

	elemt.heignt = 600;
	elemt.width = 600;
	elemt.depth = 60;
	elemt.color = 0;
	elemt.mag = 20;
	elemt.ver = 0;
	elemt.hor = 0;
	elemt.cre = cre;
	elemt.cim = cim;
	elemt.status = JULIA;
	elemt.x = elemt.heignt / 2;
	elemt.y = elemt.width / 2;
	elemt.mlx = mlx_init();
	elemt.win = mlx_new_window(elemt.mlx, elemt.heignt, elemt.width, "fractal");
	elemt.img = mlx_new_image(elemt.mlx, elemt.heignt, elemt.width);
	elemt.addr = mlx_get_data_addr(elemt.img, &elemt.bit_pixel, \
		&elemt.line_len, &elemt.endian);
	img_drawing(&elemt);
	mlx_mouse_hook(elemt.win, mouse_hook, &elemt);
	mlx_key_hook(elemt.win, key_hook, &elemt);
	mlx_hook(elemt.win, 17, 1L << 0, exit_wind, (void *)&elemt);
	mlx_loop(elemt.mlx);
	exit(0);
}

void	mk_mandel(void)
{
	t_elemt	elemt;

	elemt.heignt = 600;
	elemt.width = 600;
	elemt.depth = 60;
	elemt.color = 0;
	elemt.mag = 20;
	elemt.ver = 0;
	elemt.hor = 0;
	elemt.cre = -1;
	elemt.cim = -1;
	elemt.status = MANDEL;
	elemt.x = elemt.heignt / 2;
	elemt.y = elemt.width / 2;
	elemt.mlx = mlx_init();
	elemt.win = mlx_new_window(elemt.mlx, elemt.heignt, elemt.width, "fractal");
	elemt.img = mlx_new_image(elemt.mlx, elemt.heignt, elemt.width);
	elemt.addr = mlx_get_data_addr(elemt.img, &elemt.bit_pixel, \
		&elemt.line_len, &elemt.endian);
	img_drawing(&elemt);
	mlx_mouse_hook(elemt.win, mouse_hook, &elemt);
	mlx_key_hook(elemt.win, key_hook, &elemt);
	mlx_loop(elemt.mlx);
	exit(0);
}

unsigned int	chk_color_julia(t_elemt *elemt, double zre, double zim)
{
	int		i;
	double	tmp;

	i = 0;
	while (zre * zre + zim * zim <= 4 && i < elemt->depth)
	{
		tmp = zre * zre - zim * zim + elemt->cre;
		zim = 2 * zre * zim + elemt->cim;
		zre = tmp;
		i++;
	}
	if (zre * zre + zim * zim > 4)
	{
		if (1 < i)
			return (0x1234567890 + i * 190 + elemt-> color);
		else
			return (0x0);
	}
	else
		return (0xe2e627 + elemt->color);
}

unsigned int	chk_color_mandel(t_elemt *elemt, double cre, double cim)
{
	int		i;
	double	tmp;
	double	zim;
	double	zre;

	zim = 0;
	zre = 0;
	i = 0;
	while (zre * zre + zim * zim <= 4 && i < elemt->depth)
	{
		tmp = zre * zre - zim * zim + cre;
		zim = 2 * zre * zim + cim;
		zre = tmp;
		i++;
	}
	if (zre * zre + zim * zim > 4)
	{
		if (1 < i)
			return (0x1234567890 + i * 190 + elemt->color);
		else
			return (0x0);
	}
	return (0xe2e627 + elemt->color);
}

void	img_drawing(t_elemt *elemt)
{
	int		row;
	int		col;
	int		color;
	double	x;
	double	y;

	row = 0;
	while (row < elemt->heignt)
	{
		col = 0;
		while (col < elemt-> width)
		{
			x = (col - elemt->x + elemt->hor) / (elemt->width / elemt->mag);
			y = (row - elemt->y + elemt->ver) / (elemt->heignt / elemt->mag);
			if (elemt->status == MANDEL)
				color = chk_color_mandel(elemt, x, y);
			if (elemt->status == JULIA)
				color = chk_color_julia(elemt, x, y);
			my_mlx_pixel_put(elemt, col, row, color);
			col++;
		}
		row++;
	}
	mlx_put_image_to_window(elemt->mlx, elemt->win, elemt->img, 0, 0);
}
