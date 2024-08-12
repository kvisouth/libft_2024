# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kevisout <kevisout@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/12 12:20:18 by kevisout          #+#    #+#              #
#    Updated: 2024/08/12 13:04:10 by kevisout         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_MAND	= ft_isalnum.c ft_calloc.c ft_atoi.c ft_memchr.c ft_putstr_fd.c ft_putchar_fd.c ft_split.c ft_itoa.c ft_isalpha.c ft_memset.c ft_memcmp.c ft_strjoin.c ft_memcpy.c ft_substr.c ft_strlcpy.c ft_isprint.c ft_strdup.c ft_strmapi.c ft_tolower.c ft_strtrim.c ft_toupper.c ft_memmove.c ft_isascii.c ft_strlcat.c ft_striteri.c ft_putendl_fd.c ft_strlen.c ft_bzero.c ft_putnbr_fd.c ft_strchr.c ft_isdigit.c ft_strnstr.c ft_strncmp.c

SRC_BONUS	= 

NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -rf
AR		= ar rcs

OBJ_MAND	= $(SRC_MAND:.c=.o)
OBJ_BONUS	= $(SRC_BONUS:.c=.o)

$(NAME):	$(OBJ_MAND)
			$(AR) $(NAME) $(OBJ_MAND)

bonus:		$(OBJ_BONUS)
			$(AR) $(NAME) $(OBJ_BONUS)

all:		$(NAME)

clean:		$(RM) $(OBJ_MAND) $(OBJ_BONUS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean
			$(NAME)

.PHONY:		bonus all clean fclean re
