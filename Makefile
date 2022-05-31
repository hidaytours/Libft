# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: toryoshi </var/mail/toryoshi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/06 19:51:05 by toryoshi          #+#    #+#              #
#    Updated: 2022/05/06 19:51:23 by toryoshi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
DIR_INCLUDE = ./include
CFLAGS = -Wall -Wextra -Werror -I $(DIR_INCLUDE)
NAME = libft.a
DIR_SRC = src
SRCS =	$(DIR_SRC)/ft_atoi.c		\
		$(DIR_SRC)/ft_bzero.c		\
		$(DIR_SRC)/ft_calloc.c		\
		$(DIR_SRC)/ft_isalnum.c		\
		$(DIR_SRC)/ft_isalpha.c		\
		$(DIR_SRC)/ft_isascii.c		\
		$(DIR_SRC)/ft_isdigit.c		\
		$(DIR_SRC)/ft_isprint.c		\
		$(DIR_SRC)/ft_itoa.c		\
		$(DIR_SRC)/ft_memchr.c		\
		$(DIR_SRC)/ft_memcmp.c		\
		$(DIR_SRC)/ft_memcpy.c		\
		$(DIR_SRC)/ft_memmove.c		\
		$(DIR_SRC)/ft_memset.c		\
		$(DIR_SRC)/ft_putchar_fd.c	\
		$(DIR_SRC)/ft_putendl_fd.c	\
		$(DIR_SRC)/ft_putnbr_fd.c	\
		$(DIR_SRC)/ft_putstr_fd.c	\
		$(DIR_SRC)/ft_split.c		\
		$(DIR_SRC)/ft_strchr.c		\
		$(DIR_SRC)/ft_strdup.c		\
		$(DIR_SRC)/ft_striteri.c	\
		$(DIR_SRC)/ft_strjoin.c		\
		$(DIR_SRC)/ft_strlcat.c		\
		$(DIR_SRC)/ft_strlcpy.c		\
		$(DIR_SRC)/ft_strlen.c		\
		$(DIR_SRC)/ft_strmapi.c		\
		$(DIR_SRC)/ft_strncmp.c		\
		$(DIR_SRC)/ft_strnstr.c		\
		$(DIR_SRC)/ft_strrchr.c		\
		$(DIR_SRC)/ft_strtrim.c		\
		$(DIR_SRC)/ft_substr.c			\
		$(DIR_SRC)/ft_tolower.c		\
		$(DIR_SRC)/ft_toupper.c		\

SRCS_BONUS =	$(DIR_SRC)/ft_lstadd_back.c		\
				$(DIR_SRC)/ft_lstadd_front.c	\
        		$(DIR_SRC)/ft_lstclear.c		\
        		$(DIR_SRC)/ft_lstdelone.c		\
        		$(DIR_SRC)/ft_lstiter.c			\
        		$(DIR_SRC)/ft_lstlast.c			\
        		$(DIR_SRC)/ft_lstmap.c			\
        		$(DIR_SRC)/ft_lstnew.c			\
        		$(DIR_SRC)/ft_lstsize.c			\

DIR_OBJ = obj
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all: $(NAME)
$(NAME): $(OBJS) $(OBJS_BONUS)
	ar rcs $@ $^

re:	fclean all
fclean: clean
	$(RM) $(NAME)
clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

m: $(OBJS)
	ar rcs $(NAME) $^
b: $(OBJS_BONUS)
	ar rcs $(NAME) $^

.PHONY:	all re fclean clean m b
