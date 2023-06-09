/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <ksaelim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:28:17 by ksaelim           #+#    #+#             */
/*   Updated: 2023/05/03 11:52:28 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"
#include "stdlib.h"
#include "libft.h"
#include <stdio.h>

void	free_exit(t_data *data)
{
	if (data->node)
		free(data->node);
	free(data->line);
}

void	filename_check(char **file)
{
	int	i;

	i = ft_strlen(*file) - 4;
	if (!ft_issame(&(file[0][i]), ".fdf"))
	{
		ft_putstr_fd("Filename is Wrong! -> Only \".fdf\"\n", 1);
		exit(-1);
	}
}
