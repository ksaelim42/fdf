/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <ksaelim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 20:36:13 by ksaelim           #+#    #+#             */
/*   Updated: 2023/05/02 21:22:50 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H

# define WIDTH 1920
# define HEIGHT 1080
# define X_CENTER 960
# define Y_CENTER 540
# include "libft.h"

typedef struct s_node
{
	float	x;
	float	y;
	float	z;
	long	color;
}	t_node;

typedef struct s_img
{
	void	*img;
	char	*addr;
	int		bpp;
	int		line;
	int		endian;
}	t_img;

typedef struct s_map
{
	int		col;
	int		row;
	int		cell;
	int		pixel;
	int		px;
	int		py;
	float	scale;
}	t_map;

typedef struct s_data
{
	void	*mlx;
	void	*win;
	t_node	*node;
	t_list	*line;
	t_img	img;
	t_map	map;
	int		i;
	int		j;
	int		k;
	int		fd;
	char	**split;
}	t_data;

#endif