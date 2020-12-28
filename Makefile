# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/28 11:49:11 by abesombe          #+#    #+#              #
#    Updated: 2020/12/28 15:05:11 by abesombe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libftprintf.a

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRC_DIR =	srcs
SRC =		$(SRC_DIR)/ft_printf.c \
			$(SRC_DIR)/ft_put_addr.c \
			$(SRC_DIR)/ft_put_nbr.c \
			$(SRC_DIR)/ft_put_str.c \
			$(SRC_DIR)/ft_putexp.c \
			$(SRC_DIR)/ft_putfloat.c \
			$(SRC_DIR)/ft_putnbr_hex.c \
			$(SRC_DIR)/ft_putstrn.c \
			$(SRC_DIR)/ft_utils.c \
			$(SRC_DIC)/ft_utils_exp.c \
			$(SRC_DIR)/ft_utils_float.c \
			$(SRC_DIR)/ft_utils_hex.c \
			$(SRC_DIR)/ft_utils_str.c \
			$(SRC_DIR)/ft_utils_parsing.c
OBJ_DIR =	objs
OBJ =		$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

HEAD =		-I. -I./$(LIBFT_DIR)
CFLAGS =	-Wall -Werror -Wextra -g
LFLAGS =	-L . -lftprintf

CC = clang
RM = /bin/rm -rf

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	ar rc $(NAME) $(OBJ)
	ranlib $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(HEAD) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)

clean:
	make clean -C $(LIBFT_DIR)
	$(RM) $(OBJ)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	$(RM) $(OBJ_DIR)
	$(RM) $(NAME)

re: fclean all

.PONY: all, clean, fclean, re
