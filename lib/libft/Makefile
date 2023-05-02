# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksaelim <ksaelim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/02 14:31:53 by ksaelim           #+#    #+#              #
#    Updated: 2023/05/02 15:02:26 by ksaelim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS	= -Wall -Werror -Wextra

SRCS	= ft_isdigit.c \
	  ft_strlcpy.c \
	  ft_atoi.c \
	  ft_atoi_hex.c \
	  ft_split.c \
	  ft_lstsize.c \
	  ft_lstnew.c \
	  ft_lstadd_front.c \
	  ft_lstadd_back.c \
	  ft_lstlast.c \
	  ft_lstclear.c \
	  ft_lstdelone.c \
	  ft_lstiter.c \
	  ft_lstmap.c \
	  ft_issame.c \
	  ft_strlen.c \
	  ft_putstr_fd.c

OBJS	= $(SRCS:.c=.o)
NAME	= libft.a

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
