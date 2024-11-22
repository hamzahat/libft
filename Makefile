# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbenmoha <hbenmoha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 16:47:44 by hbenmoha          #+#    #+#              #
#    Updated: 2024/11/22 08:58:32 by hbenmoha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = $(addsuffix .c, $(addprefix ft_, isalpha\
										isdigit\
										isalnum\
										isascii\
										isprint\
										strlen\
										memset\
										bzero\
										memcpy\
										memmove\
										strlcpy\
										strlcat\
										toupper\
										tolower\
										strchr\
										strrchr\
										strncmp\
										memchr\
										memcmp\
										strnstr\
										atoi\
										calloc\
										strdup\
										substr\
										strjoin\
										strtrim\
										split\
										itoa\
										strmapi\
										striteri\
										putchar_fd\
										putstr_fd\
										putendl_fd\
										putnbr_fd))
OBJ := $(SRC:%.c=%.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror 


all: $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean
