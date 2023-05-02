/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <ksaelim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:44:01 by ksaelim           #+#    #+#             */
/*   Updated: 2023/05/02 21:54:24 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include "data.h"
# include "input.h"
# include "render.h"
# include "mlx.h"
# include <stdlib.h>

void	input_map(int ac, char **av, t_data *data);
void	ft_rendering(t_data *data);
void	ft_init(t_data *data, int mode);
int		handle_keycode(int keycode, t_data *data);
int		handle_cross(t_data *data);

#endif