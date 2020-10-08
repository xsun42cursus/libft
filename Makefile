# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/06 22:17:07 by xsun              #+#    #+#              #
#    Updated: 2020/10/08 22:13:39 by xsun             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=libft.a

SOURCES	=	ft_memset.c
SOURCES	+=	ft_bzero.c
SOURCES	+=	ft_memccpy.c
SOURCES	+=	ft_memchr.c
SOURCES	+=	ft_memcmp.c
SOURCES	+=	ft_memcpy.c
SOURCES	+=	ft_memmove.c
SOURCES	+=	ft_strlen.c
SOURCES	+=	ft_isalnum.c
SOURCES	+=	ft_isalpha.c
SOURCES	+=	ft_isascii.c
SOURCES	+=	ft_isdigit.c
SOURCES	+=	ft_isprint.c
SOURCES	+=	ft_atoi.c
SOURCES	+=	ft_calloc.c
SOURCES	+=	ft_strchr.c
SOURCES	+=	ft_strdup.c
SOURCES	+=	ft_strlcat.c
SOURCES	+=	ft_strlcpy.c
SOURCES	+=	ft_strncmp.c
SOURCES	+=	ft_strnstr.c
SOURCES	+=	ft_strrchr.c
SOURCES	+=	ft_tolower.c
SOURCES	+=	ft_toupper.c
SOURCES	+=	ft_substr.c
SOURCES	+=	ft_strjoin.c
#SOURCES	+=	ft_strtrim.c

OBJS	=$(SOURCES:%.c=%.o)

CFLAGS	= -Wall -Wextra -Werror
CC		= gcc
AR		= ar
ARFLAGS	= cr

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

.c.o:
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: fclean all clean re
