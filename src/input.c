/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <ksaelim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:11:32 by ksaelim           #+#    #+#             */
/*   Updated: 2023/05/02 20:12:32 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "input.h"

void	input_map(int ac, char **file, t_data *data)
{
	if (ac != 2)
		exit(0);
	filename_check(file);
	ft_init(data, 0);
	create_img(data);
	get_data_map(file, data);
	sketch_img(data);
}
