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
addi = addition_function
SOURCE = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memcmp.c\
		ft_memchr.c ft_memmove.c ft_strlen.c ft_strcpy.c ft_strcat.c \
		ft_strdup.c ft_strchr.c ft_strstr.c ft_atoi.c \
		ft_isdigit.c ft_isprint.c ft_isascii.c ft_isalpha.c ft_toupper.c \
		ft_tolower.c ft_strncpy.c ft_isalnum.c ft_strncat.c ft_strlcat.c ft_strncmp.c ft_strrchr.c ft_strcmp.c ft_strnstr.c ft_itoa.c ft_strdel.c ft_strclr.c ft_strequ.c \
		 ft_striter.c ft_itoa.c ft_strdel.c \
		 ft_strclr.c ft_strequ.c ft_striter.c \
		 ft_striteri.c ft_strjoin.c ft_strmap.c \
		 ft_strmapi.c ft_strnequ.c ft_strnew.c \
		 ft_strsplit.c ft_strsub.c ft_strtrim.c
		
		#  addi/ft_itoa.c addi/ft_itoa.c addi/ft_itoa.c addi/ft_itoa.c 
		#  addi/ft_itoa.c addi/ft_itoa.c addi/ft_itoa.c addi/ft_itoa.c 


OBJ =  ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memcmp.o\
		ft_memchr.o ft_memmove.o ft_strlen.o ft_strcpy.o ft_strcat.o \
		ft_strdup.o ft_strchr.o ft_strstr.o ft_atoi.o \
		ft_isdigit.o ft_isprint.o ft_isascii.o ft_isalpha.o ft_toupper.o \
		ft_tolower.o ft_strncpy.o ft_isalnum.o ft_strncat.o ft_strlcat.o ft_strncmp.o ft_strrchr.o ft_strcmp.o ft_strnstr.o ft_itoa.o \
		 ft_strdel.o ft_strclr.o ft_strequ.o \
		 ft_striter.o ft_itoa.o ft_strdel.o \
		 ft_strclr.o ft_strequ.o ft_striter.o \
		 ft_striteri.o ft_strjoin.o ft_strmap.o \
		 ft_strmapi.o ft_strnequ.o ft_strnew.o \
		 ft_strsplit.o ft_strsub.o ft_strtrim.o
		
# $(SOURCE:%.c = %.o)

all:	$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ):	%.o:%.c
	# gcc -c $< -o $@
	 gcc -c $(CFLAG) $(SOURCE)

# $(NAME): $(OBJ)
# 	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
# fclean: clean
	# rm -f $(NAME)

re:	fclean all

.PHONY:	clean fclean all re
