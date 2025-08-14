# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: equintas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/01 05:41:10 by equintas          #+#    #+#              #
#    Updated: 2025/07/03 08:27:41 by equintas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
CC	=	cc
FLAG	=	-Wall -Wextra -Werror

OBJS	=	ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o ft_isascii.o \
		ft_isdigit.o ft_isprint.o ft_itoa.o ft_memchr.o ft_memcmp.o ft_memcpy.o \
		ft_memmove.o ft_memset.o ft_putchar_fd.o ft_putendl_fd.o ft_putnbr_fd.o \
		ft_putstr_fd.o ft_split.o ft_strchr.o ft_strdup.o ft_strlen.o ft_strmapi.o\
		ft_striteri.o ft_strjoin.o ft_strlcat.o ft_strncmp.o ft_strnstr.o ft_strrchr.o \
		ft_strtrim.o ft_substr.o ft_tolower.o ft_toupper.o ft_strlcpy.o

RM	=	rm -f

FLAGLIB	=	ar rcs

HEADER	=	libft.h

all:	$(NAME)

$(OBJS): $(HEADER)

$(NAME): $(OBJS)
	$(FLAGLIB) $(NAME) $(OBJS)
	
clean :
	$(RM)	$(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean	all

.PHONY: all clean fclean re
