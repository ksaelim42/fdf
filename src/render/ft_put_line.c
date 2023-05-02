/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_line.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <ksaelim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:17:28 by ksaelim           #+#    #+#             */
/*   Updated: 2023/05/02 20:16:56 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"
#include <stdio.h>

void	ft_mlx_pixel_put(t_img *img, int x, int y, int color)
{
	char	*dst;

	if ((x < 0 || x >= WIDTH) || (y < 0 || y >= HEIGHT))
		return ;
	dst = img->addr + (y * img->line + x * (img->bpp / 8));
	*(unsigned int *)dst = color;
}
