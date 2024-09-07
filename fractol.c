/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 11:27:11 by ryomori           #+#    #+#             */
/*   Updated: 2024/06/24 13:09:41 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	key_hook(int keycode, t_elemt *elemt)
{
	if (keycode == 65361)
	{
		elemt->color += 10;
		elemt->hor += 25;
	}
	else if (keycode == 65363)
	{
		elemt->color += 10;
		elemt->hor -= 25;
	}
	else if (keycode == 65362)
	{
		elemt->color += 10;
		elemt->ver += 25;
	}
	else if (keycode == 65364)
	{
		elemt->color += 10;
		elemt->ver -= 25;
	}
	else if (keycode == 65307)
		return (esc_close(keycode, elemt));
	img_drawing(elemt);
	return (0);
}

int	mouse_hook(int button, int x, int y, t_elemt *elemt)
{
	(void)x;
	(void)y;
	if (elemt->mag == 0.0)
		elemt->mag = 0.000001;
	if (button == 4)
	{
		elemt->mag *= 1.2;
	}
	else if (button == 5)
	{
		elemt->mag *= 0.8;
	}
	else
		return (0);
	img_drawing(elemt);
	return (0);
}

int	esc_close(int keycode, t_elemt *elemt)
{
	(void) keycode;
	mlx_destroy_window(elemt->mlx, elemt->win);
	exit (0);
	return (0);
}

int	exit_wind(t_elemt *elemt)
{
	(void)elemt;
	exit(0);
}

void	my_mlx_pixel_put(t_elemt *elemt, int x, int y, int color)
{
	char	*dst;

	dst = elemt->addr + (y * elemt->line_len + x * (elemt->bit_pixel / 8));
	*(unsigned int *)dst = color;
}
