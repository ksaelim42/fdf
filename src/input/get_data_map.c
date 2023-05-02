/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <ksaelim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:18:29 by ksaelim           #+#    #+#             */
/*   Updated: 2023/05/02 21:03:10 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_map_size.h"
#include <stdio.h>

void	get_data_map(char **file, t_data *data)
{
	t_list	*head;
	char	*tmp;

	head = NULL;
	data->fd = ft_open(file);
	while (1)
	{
		tmp = get_next_line(data->fd);
		if (!tmp)
			break ;
		data->line = ft_lstnew(tmp);
		ft_lstadd_back(&head, data->line);
		data->map.row++;
	}
	close(data->fd);
	data->line = head;
	get_height(data, head->content);
	data->map.cell = data->map.col * data->map.row;
}
