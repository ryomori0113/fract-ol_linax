/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 11:32:59 by ryomori           #+#    #+#             */
/*   Updated: 2024/06/24 13:12:23 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "mlx.h"
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>
# include <limits.h>
# include <unistd.h>
# include "libft/libft.h"

# define MANDEL 1
# define JULIA 2

typedef struct s_elemt
{
	void			*mlx;
	void			*win;
	struct s_elemt	*img;
	char			*addr;
	int				heignt;
	int				width;
	int				color;
	int				status;
	double			cre;
	double			cim;
	double			depth;
	double			x;
	double			y;
	int				ver;
	int				hor;
	double			mag;
	int				bit_pixel;
	int				endian;
	int				line_len;
}	t_elemt;

int				error_message(void);
int				key_hook(int keycode, t_elemt *elemt);
int				mouse_hook(int button, int x, int y, t_elemt *elemt);
int				esc_close(int keycode, t_elemt *elemt);
int				exit_wind(t_elemt *elemt);
int				main(int ac, char **av);
int				ft_atof(char *digit_str, double *num);
void			my_mlx_pixel_put(t_elemt *elemt, int x, int y, int color);
void			mk_julia(double cre, double cim);
void			mk_mandel(void);
unsigned int	chk_color_julia(t_elemt *elemt, double zre, double zim);
unsigned int	chk_color_mandel(t_elemt *elemt, double cre, double cim);
void			img_drawing(t_elemt *elemt);

#endif