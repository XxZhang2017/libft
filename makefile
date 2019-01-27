# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/25 16:14:58 by xinzhang          #+#    #+#              #
#    Updated: 2019/01/25 16:38:00 by xinzhang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAG = -Wall -Werror -Wextra
SOURCE = ft_memset.c ft_bzero.c ft_memcpy.c ft_memset.c ft_memccpy.c \
		 ft_memchr.c ft_memmove.c ft_strlen.c ft_strcpy.c ft_strcat.c \
		 ft_strdup.c ft_strchr.c ft_strstr.c ft_isalnum.c ft_atoi.c \
		 ft_isdigit.c ft_isprint.c ft_isascii.c ft_isalpha.c ft_toupper.c \
		 ft_tolower.c ft_strncpy ft_isalnum.c ft_strncat.c ft_strlcat.c \
		 ft_strncmp.c ft_strrchr.c ft_strcmp.c ft_strnstr.c


OBJ = $(SOURCE:.c = .o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ): $(SOURCE)
	gcc -c $(CFLAG) $(SOURCE)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
