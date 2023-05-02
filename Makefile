# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksaelim <ksaelim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/16 20:05:25 by ksaelim           #+#    #+#              #
#    Updated: 2023/05/02 21:53:00 by ksaelim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdd

LIB = lib/

LIBFT_DIR = $(LIB)libft/

GNL_DIR = $(LIB)get_next_line/

MLX_DIR = $(LIB)mlx/

HEADER_DIR = header/

SRC_DIR = src/

MAIN_SRCS = input.c \
		render.c \
		main.c \
		handle.c

INPUT_SRCS = input/create_img.c \
				input/get_data_map.c \
				input/sketch_img.c \
				input/utils/sketch_img_utils.c \
				input/utils/get_data_map_utils.c \
					
RENDER_SRCS = render/ft_put_line.c \
					render/ft_draw_line.c \
					render/ft_put_color.c 

UTILS_SRCS = utils/ft_init.c \
					utils/error_check.c \

CFLAGS = -Wall -Wextra -Werror -g

LIBFT_FLAGS = -L$(LIBFT_DIR) -lft

GNL_FLAGS = -L$(GNL_DIR) -lgnl

MLX_FLAGS = -L$(MLX_DIR) -lmlx

LIBFT_HEAD = -I$(LIBFT_DIR)

GNL_HEAD = -I$(GNL_DIR)

MLX_HEAD = -I$(MLX_DIR)

HEADER = -I$(HEADER_DIR) -I$(HEADER_DIR)input/ -I$(HEADER_DIR)render/

SRCS = $(addprefix $(SRC_DIR), $(MAIN_SRCS)) \
		$(addprefix $(SRC_DIR), $(INPUT_SRCS)) \
		$(addprefix $(SRC_DIR), $(RENDER_SRCS)) \
		$(addprefix $(SRC_DIR), $(UTILS_SRCS))

#BUILD = .build/

OBJS := $(SRCS:.c=.o)
	
%.o:%.c
	gcc $(CFLAGS) $(HEADER) $(LIBFT_HEAD) $(MLX_HEAD) $(GNL_HEAD) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT_DIR)
	@make -C $(GNL_DIR)
	@make -C $(MLX_DIR)
	gcc $(CFLAGS) $(OBJS) $(MLX_FLAGS) $(LIBFT_FLAGS) $(GNL_FLAGS) -framework OpenGL -framework AppKit -o $(NAME)

clean:
	@make fclean -C $(LIBFT_DIR)
	@make fclean -C $(GNL_DIR)
	@make clean -C $(MLX_DIR)
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
