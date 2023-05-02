/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sketch_img.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <ksaelim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:32:18 by ksaelim           #+#    #+#             */
/*   Updated: 2023/05/03 00:02:09 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sketch_img.h"

static int	check_char(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

void	point_xyz(t_data *data)
{
	data->j = 0;
	while (data->split[data->j])
	{
		data->node[data->i].z = (float)ft_atoi(data->split[data->j]) * \
		(data->map.scale / 10);
		if (check_char(data->split[data->j], ','))
			data->node[data->i].color = ft_atoi_hex(data->split[data->j]);
		else
			data->node[data->i].color = 0x00FFFFFF;
		data->node[data->i].x = data->j * data->map.scale;
		data->node[data->i].y = data->k * data->map.scale;
		data->j++;
		data->i++;
	}
	data->k++;
}

void	sketch_img(t_data *data)
{
	t_list	*head;
	t_list	*tmp;

	head = data->line;
	ft_init(data, 1);
	data->node = malloc(sizeof(t_node) * data->map.cell);
	if (!data->node)
		exit(0);
	data->map.scale = 10;
	while (data->i < data->map.cell)
	{
		data->split = ft_split(data->line->content, ' ');
		point_xyz(data);
		free_2d(data->split);
		data->line = data->line->next;
	}
	while (head)
	{
		tmp = head;
		free(head->content);
		head = head->next;
		free(tmp);
	}
	call_center(data);
}
