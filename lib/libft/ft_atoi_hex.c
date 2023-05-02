/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <ksaelim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 19:36:43 by ksaelim           #+#    #+#             */
/*   Updated: 2023/05/02 20:32:07 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi_hex(char *s)
{
	int		i;
	long	sum;
	long	num;

	i = 0;
	sum = 0;
	num = 0;
	while (ft_isdigit(s[i]))
		i++;
	while (s[i] == ',' || s[i] == '0' || s[i] == 'x')
		i++;
	while (s[i] && s[i] != ' ' && s[i] != '\n')
	{
		if (s[i] >= 'a' && s[i] <= 'f')
			num = s[i] - 'a' + 10;
		else if (s[i] >= 'A' && s[i] <= 'F')
			num = s[i] - 'A' + 10;
		else if (s[i] >= '0' && s[i] <= '9')
			num = s[i] - '0';
		sum = (sum * 16) + num;
		i++;
	}
	return (sum);
}
