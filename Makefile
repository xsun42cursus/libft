# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/06 22:17:07 by xsun              #+#    #+#              #
#    Updated: 2020/10/11 21:47:20 by xsun             ###   ########.fr        #
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
SOURCES	+=	ft_strtrim.c
SOURCES	+=	ft_split.c
SOURCES	+=	ft_itoa.c
SOURCES	+=	ft_strmapi.c
SOURCES	+=	ft_putchar_fd.c
SOURCES	+=	ft_putstr_fd.c
SOURCES	+=	ft_putendl_fd.c
SOURCES	+=	ft_putnbr_fd.c

BONUS_SRCS	=	$(SOURCES)
BONUS_SRCS	+=	ft_lstnew.c
BONUS_SRCS	+=	ft_lstadd_front.c
BONUS_SRCS	+=	ft_lstsize.c
BONUS_SRCS	+=	ft_lstlast.c
BONUS_SRCS	+=	ft_lstadd_back.c
BONUS_SRCS	+=	ft_lstdelone.c
BONUS_SRCS	+=	ft_lstclear.c
BONUS_SRCS	+=	ft_lstiter.c
BONUS_SRCS	+=	ft_lstmap.c

OBJS		=	$(SOURCES:%.c=%.o)
BONUS_OBJS	=	$(BONUS_SRCS:%.c=%.o)

CFLAGS	= -Wall -Wextra -Werror
CC		= gcc
AR		= ar
ARFLAGS	= cr

all: $(NAME)

bonus: $(BONUS_OBJS)
	$(AR) $(ARFLAGS) $(NAME) $^

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

clean:
	@$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: fclean all clean re bonus
