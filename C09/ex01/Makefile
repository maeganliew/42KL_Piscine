# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/26 13:09:21 by jialiew           #+#    #+#              #
#    Updated: 2023/02/26 14:54:08 by jialiew          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SDIR = ./srcs/
HDIR = ./includes/
SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRCS = ${addprefix $(SDIR), $(SRC)}
HEAD = ft.h
HEADS = ${addprefix $(HDIR), $(HEAD)}
OBJECT = ${SRCS:.c=.o}
OUTPUT = libft.a
CFLAGS = -c -Wall -Werror -Wextra -I $(HDIR)
CC = cc
AR = ar
ARFLAGS = -crs

$(OBJECT): $(SDIR)%.o: $(SDIR)%.c $(HEADS)
	$(CC) $(CFLAGS) -o $@ $<

$(OUTPUT): $(OBJECT)
	$(AR) $(ARFLAGS) $@ $(OBJECT)

all: $(OUTPUT)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(OUTPUT)

re: fclean all

.PHONY: all clean fclean re
