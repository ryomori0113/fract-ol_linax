/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-19 03:36:03 by ryomori           #+#    #+#             */
/*   Updated: 2024-08-19 03:36:03 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	main(int ac, char **av)
{
	double	cre;
	double	cim;
	int		chk_cim;
	int		chk_cre;

	if (ac == 2 && av[1][0] == 'm' && av[1][1] == '\0')
		mk_mandel();
	else if (ac == 4 && av[1][0] == 'j' && av[1][1] == '\0')
	{
		chk_cre = ft_atof(av[2], &cre);
		chk_cim = ft_atof(av[3], &cim);
		if (chk_cre == 0 || chk_cre == 0)
			return (error_message());
		mk_julia(cre, cim);
	}
	return (error_message());
}

int	ft_atof(char *digit_str, double *num)
{
	int	i;

	i = 0;
	if (5 < ft_strlen(digit_str))
		return (0);
	if (digit_str[i] == '-')
		i++;
	while ('0' <= digit_str[i] && digit_str[i] <= '9')
		i++;
	if (digit_str[i] != '\0')
		return (0);
	*num = (double)ft_atoi(digit_str) / 1000;
	return (1);
}

int	error_message(void)
{
	ft_putstr_fd("Please enter the following values\n	EX :./a.aut m\n\
	EX: ./a.out j -345 654", 1);
	return (0);
}
