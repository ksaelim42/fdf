/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <ksaelim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:27:36 by ksaelim           #+#    #+#             */
/*   Updated: 2023/05/02 21:23:18 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw_line.h"
#include <stdio.h>

void	call_dda(t_img *img, t_node start, t_node end)
{
	float	dx;
	float	dy;
	float	pixel;

	dx = end.x - start.x;
	dy = end.y - start.y;
	pixel = sqrt((dx * dx) + (dy * dy));
	dx /= pixel;
	dy /= pixel;
	while (pixel-- > 0)
	{
		ft_mlx_pixel_put(img, start.x, start.y, start.color);
		start.x += dx;
		start.y += dy;
	}
}

void	ft_draw_line(t_data *data)
{
	int	max_row;

	data->i = 0;
	max_row = data->map.cell - data->map.col;
	while (data->i < data->map.cell)
	{
		if ((data->i + 1) % data->map.col != 0)
			call_dda(&data->img, data->node[data->i], data->node[data->i + 1]);
		if (data->i < max_row)
			call_dda(&data->img, data->node[data->i], \
			data->node[data->i + data->map.col]);
		data->i++;
	}
}
