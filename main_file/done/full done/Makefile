# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/27 17:33:51 by ammirzae          #+#    #+#              #
#    Updated: 2026/04/27 17:34:47 by ammirzae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_isalpha.c ft_memchr.c ft_memset.c ft_strjoin.c ft_strncmp.c ft_tolower.c ft_bzero.c ft_isascii.c ft_memcmp.c ft_split.c ft_strlcat.c  ft_strnstr.c ft_toupper.c ft_calloc.c ft_isdigit.c  ft_memcpy.c ft_strchr.c ft_strlcpy.c ft_strrchr.c ft_isalnum.c ft_isprint.c ft_memmove.c ft_strdup.c ft_strlen.c ft_substr.c
OBJ = $(SRC:.c=.o)
DEPS = $(OBJ:.o=.d)
CPPFLAG = -MMD -MP 
CC = cc
CCFLAG = -Wall -Wextra -Werror
AR = ar
ARFLAG = rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAG) $(NAME) -o  $(OBJ)

%.o: %.c
	$(CC) $(CCFLAG) $(CPPFLAG) -c $< -o $@

clean:
	rm -f $(OBJ) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


