/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_img.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <ksaelim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:31:27 by ksaelim           #+#    #+#             */
/*   Updated: 2023/05/02 21:02:22 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "create_img.h"
#include <stdio.h>

void	create_img(t_data *data)
{
	data->mlx = mlx_init();
	data->win = mlx_new_window(data->mlx, WIDTH, HEIGHT, "fdf ja!");
	data->img.img = mlx_new_image(data->mlx, WIDTH, HEIGHT);
	data->img.addr = mlx_get_data_addr(data->img.img, &data->img.bpp, \
	&data->img.line, &data->img.endian);
}
