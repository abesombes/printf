# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/28 11:49:11 by abesombe          #+#    #+#              #
#    Updated: 2020/12/31 18:32:38 by abesombe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libprintf.a

SRC_DIR =	srcs
SRC =		$(SRC_DIR)/ft_printf.c \
			$(SRC_DIR)/ft_put_nbr.c \
			$(SRC_DIR)/ft_putnbr_f.c \
			$(SRC_DIR)/ft_put_str.c \
			$(SRC_DIR)/ft_putstr_f.c \
			$(SRC_DIR)/ft_putchar_f.c \
			$(SRC_DIR)/ft_put_exp.c \
			$(SRC_DIR)/ft_put_float.c \
			$(SRC_DIR)/ft_put_nbr_hex.c \
			$(SRC_DIR)/ft_putstrn.c \
			$(SRC_DIR)/ft_strlen.c \
			$(SRC_DIR)/ft_utils.c \
			$(SRC_DIR)/ft_utils_exp.c \
			$(SRC_DIR)/ft_utils_float.c \
			$(SRC_DIR)/ft_utils_hex.c \
			$(SRC_DIR)/ft_utils_str.c \
			$(SRC_DIR)/ft_utils_parsing.c \
			$(SRC_DIR)/ft_utils_parsing_2.c
OBJ_DIR =	objs
OBJ =		$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

HEAD =		-I.
CFLAGS =	-Wall -Werror -Wextra
LFLAGS =	-L . -lftprintf

CC = gcc
RM = /bin/rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(HEAD) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(OBJ_DIR)
	$(RM) $(NAME)

re: fclean all

.PONY: all, clean, fclean, re
