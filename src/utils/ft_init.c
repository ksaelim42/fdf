/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <ksaelim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:08:57 by ksaelim           #+#    #+#             */
/*   Updated: 2023/05/03 00:06:49 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"
#include <stdlib.h>

void	ft_init_map(t_map *map)
{
	map->row = 0;
	map->col = 0;
	map->scale = 10;
}

void	ft_init_img(t_img *img)
{
	img->img = NULL;
	img->addr = NULL;
	img->bpp = 0;
	img->line = 0;
	img->endian = 0;
}

void	ft_init(t_data *data, int mode)
{
	if (mode == 0)
	{
		data->mlx = NULL;
		data->win = NULL;
		data->node = NULL;
		data->i = 0;
		data->fd = 0;
		ft_init_map(&data->map);
	}
	else
	{
		data->i = 0;
		data->j = 0;
		data->k = 0;
	}
}
