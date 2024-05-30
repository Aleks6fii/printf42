# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/29 13:49:49 by afilippo          #+#    #+#              #
#    Updated: 2024/05/29 16:14:28 by afilippo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =  ft_format.c \
	  ft_print_hex.c \
	  ft_print_ptr.c \
	  ft_printf.c \
	  ft_printnbr.c \
	  ft_printstr.c \
	  ft_printu.c \
	  ft_putchar.c \
	  ft_putstr.c

NAME = libftprintf.a

CC = cc

FLAG = -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)

ARFLAGS = rcs

all: $(NAME)

$(NAME): $(OBJ)
	ar $(ARFLAGS) $(NAME) $(OBJ)
	
%.o: %.c
	$(CC) $(FLAG) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "$(OBJ) deleted"
	
fclean: clean 
	@rm -f $(NAME)
	@echo "$(NAME) deleted"
	
re: fclean all

.PHONY: all, clean, fclean, re
