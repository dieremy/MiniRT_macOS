# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/10 10:51:10 by robegarc          #+#    #+#              #
#    Updated: 2023/05/08 10:40:14 by robegarc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# EXECUTABLE
NAME = miniRT


# SRC AND OBJ FILES
SRCS =	main.c \
		srcs/event/event.c \
		srcs/graphic/utils.c \

OBJS = $(SRCS:.c=.o)


# LIBRARY
LIBFT = incl/libft/
LIBARC = ${addprefix ${LIBFT}, libft.a}
MLX = -lmlx -framework OpenGL -framework AppKit


# COMPILE
CC = gcc
FLAG = -Wall -Wextra -Werror -Ofast -g


# COLORS
ORANGE = \033[0;35m
VIOLET = \033[0;94m
NONE = \033[0m


# RULEZ
%.o: %.c
	@$(CC) ${FLAG} -c $< -o $@

$(NAME) : $(OBJS)
	@make all -C ${LIBFT}
	@$(CC) ${FLAG} $(OBJS) $(MLX) ${LIBARC} -o $(NAME) -g
	@echo "${VIOLET}./${NAME} has been created${NONE}"

all : $(NAME)

clean :
	@make clean -C ${LIBFT}
	@rm -rf $(OBJS)
	@echo "${ORANGE}OBJS deleted.${NONE}"

fclean : clean
	@make fclean -C ${LIBFT}
	@rm -rf $(NAME)
	@echo "${ORANGE}./${NAME} deleted${NONE}"

re : fclean all clean
	@echo "${VIOLET}RESTART${NONE}"

.PHONY: clean fclean re all
