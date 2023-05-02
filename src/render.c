/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <ksaelim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 22:01:08 by ksaelim           #+#    #+#             */
/*   Updated: 2023/05/03 00:01:17 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "render.h"
#include "input.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_rendering(t_data *data)
{
	ft_draw_line(data);
	mlx_put_image_to_window(data->mlx, data->win, data->img.img, 0, 0);
}
