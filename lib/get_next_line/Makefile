# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksaelim <ksaelim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/28 23:11:46 by ksaelim           #+#    #+#              #
#    Updated: 2023/04/29 09:21:56 by ksaelim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS	= -Wall -Werror -Wextra

SRCS	= get_next_line.c \
	  get_next_line_utils.c \

OBJS	= $(SRCS:.c=.o)
NAME	= libgnl.a

%o : %c
	gcc $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

all: $(NAME)

clean: 
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY:	all clean fclean re