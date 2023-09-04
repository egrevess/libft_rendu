# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egrevess <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 14:44:05 by egrevess          #+#    #+#              #
#    Updated: 2022/10/12 13:10:06 by egrevess         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_strlen.c ft_strncmp.c \
	   ft_isascii.c ft_isprint.c ft_memset.c ft_bzero.c ft_memcpy.c \
	   ft_memmove.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	   ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
	   ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_substr.c ft_strjoin.c \
	   ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c \
	   ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c

SRCB = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	   ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	   ft_lstclear_bonus.c ft_lstiter_bonus.c

OBJECT = $(SRCS:.c=.o)

OBJECTB = $(SRCB:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJECT)
		ar -rcs $(NAME) $(OBJECT)

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

clean:
		rm -f $(OBJECT) $(OBJECTB)

fclean: clean
		rm -f $(NAME)

re: 	fclean $(NAME)

bonus: $(OBJECT) $(OBJECTB)
		ar -rcs $(NAME) $(OBJECT) $(OBJECTB)

.PHONY: all clean fclean re bonus 
