/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_size.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <ksaelim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:24:16 by ksaelim           #+#    #+#             */
/*   Updated: 2023/05/02 22:17:39 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_MAP_SIZE_H
# define GET_MAP_SIZE_H

# include "data.h"
# include <fcntl.h>
# include "libft.h"
# include "main.h"
# include "get_next_line.h"

int		ft_open(char **file);
void	get_height(t_data *data, char *s);
void	free_2d(char **str);

#endif