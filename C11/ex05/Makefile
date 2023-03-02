# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 17:31:08 by jialiew           #+#    #+#              #
#    Updated: 2023/03/02 17:56:05 by jialiew          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SDIR = ./srcs/
SRC = array_op.c function.c main.c
SRCS = ${addprefix $(SDIR), $(SRC)}
HEAD = ft.h
HEADS = ${addprefix $(SDIR), $(HEAD)}
OBJECT = ${SRCS:.c=.o}
OUTPUT = do-op
CFLAGS = -Wall -Wextra -Werror
CC = cc

.PHONY: all clean fclean re

all:
	${CC} ${CFLAGS} -I ${SDIR} ${SRCS} -o ${OUTPUT}

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(OUTPUT)

re: fclean all
