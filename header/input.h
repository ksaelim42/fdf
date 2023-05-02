/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <ksaelim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:41:10 by ksaelim           #+#    #+#             */
/*   Updated: 2023/05/02 23:57:37 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_H
# define INPUT_H

# include "data.h"
# include "main.h"
# include "ft_error.h"
# include "sketch_img.h"
# include <stdlib.h>

void	create_img(t_data *data);
void	get_data_map(char **file, t_data *data);
void	sketch_img(t_data *data);

#endif
