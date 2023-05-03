/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sketch_img_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <ksaelim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:59:43 by ksaelim           #+#    #+#             */
/*   Updated: 2023/05/03 08:04:48 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"
#include <math.h>
#include <stdio.h>

float	iso_map(float x_map, float y_map, char axis)
{
	if (axis == 'x')
		return ((x_map - y_map) * cos(0.8));
	if (axis == 'y')
		return ((x_map + y_map) * sin(0.8));
	return (0);
}

void	iso_xyz(float x, float y, t_node *node)
{
	node->x = (x - y) * cos(0.8);
	node->y = ((x + y) * sin(0.8)) - node->z;
}
/* 
float	iso_map(float x_map, float y_map, char axis)
{
	if (axis == 'x')
		return ((x_map - y_map) * cos(0.523599));
	if (axis == 'y')
		return ((x_map + y_map) * sin(0.523599));
	return (0);
}

void	iso_xyz(float x, float y, t_node *node)
{
	node->x = (x - y) * cos(0.523599);
	node->y = (x + y) * sin(0.523599) - node->z;
} */

void	call_center(t_data *data)
{
	float	x_map;
	float	y_map;
	float	x_cen;
	float	y_cen;

	x_map = (data->map.col * data->map.scale) / 2;
	y_map = (data->map.row * data->map.scale) / 2;
	x_cen = (float)X_CENTER - (iso_map(x_map, y_map, 'x'));
	y_cen = (float)Y_CENTER - (iso_map(x_map, y_map, 'y'));
	data->i = 0;
	while (data->i < data->map.cell)
	{
		iso_xyz(data->node[data->i].x, data->node[data->i].y, \
		&data->node[data->i]);
		data->node[data->i].x += x_cen;
		data->node[data->i].y += y_cen;
		data->i++;
	}
}
