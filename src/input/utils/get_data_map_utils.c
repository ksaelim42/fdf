/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data_map_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <ksaelim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:45:11 by ksaelim           #+#    #+#             */
/*   Updated: 2023/05/03 11:53:22 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"
#include <fcntl.h>
#include "ft_error.h"
#include "create_img.h"
#include "get_map_size.h"
#include "sketch_img.h"
#include "libft.h"
#include <stdio.h>

void	free_2d(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

void	get_height(t_data *data, char *s)
{
	int	i;

	i = 0;
	data->split = ft_split(s, ' ');
	if (!data->split)
		free_exit(data);
	while (data->split[i++] != NULL)
		data->map.col++;
	free_2d(data->split);
}

int	ft_open(char **file)
{
	int	fd;

	fd = open(*file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_fd("fd error\n", 1);
		exit(-1);
	}
	return (fd);
}
