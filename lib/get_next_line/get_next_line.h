/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <ksaelim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:56:12 by ksaelim           #+#    #+#             */
/*   Updated: 2023/04/23 14:12:01 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5000
# endif

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*get_keep(char *str, size_t cut_line);
char	*get_cut_line(char *str, size_t cut_line);
size_t	ft_strlen_mode(char *str, char c);
char	*ft_strrchr(char *str);
char	*read_line(int fd, char *keep);
char	*ft_strjoin(char *s1, char *s2);
#endif
