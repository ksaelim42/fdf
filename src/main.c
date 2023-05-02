/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <ksaelim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:11:03 by ksaelim           #+#    #+#             */
/*   Updated: 2023/05/03 00:02:30 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include "mlx.h"
#include "data.h"

int	main(int ac, char **av)
{
	t_data	data;

	input_map(ac, &av[1], &data);
	ft_rendering(&data);
	mlx_hook(data.win, 2, 1L << 0, &handle_keycode, 0);
	mlx_hook(data.win, 17, 0, &handle_cross, 0);
	mlx_loop(data.mlx);
	free(&data);
	return (0);
}
