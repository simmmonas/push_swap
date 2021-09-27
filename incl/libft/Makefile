# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: simonasemancova <simonasemancova@studen      +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/06 00:54:15 by simonaseman   #+#    #+#                  #
#    Updated: 2021/09/24 17:16:15 by ssemanco      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

SRC =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strcmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \

C_OBJS = $(SRC:.c=.o)

BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \


BONUS_OBJS = $(BONUS:.c=.o)

CC = gcc
RM = rm -f
cFLAGS = -Wall -Werror -Wextra

ifdef WITH_BONUS
OBJECTS = $(C_OBJS) $(BONUS_OBJS)
else
OBJECTS = $(C_OBJS)
endif

all: $(NAME)

$(NAME): $(OBJECTS)
			ar rcs $(NAME) $(OBJECTS)

%.o: %.c $(HEADER)
		$(CC) -c $(cFLAGS) -o $@ $<

clean:
	$(RM) $(C_OBJS) $(BONUS_OBJS)

fclean:
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

bonus:
	$(MAKE) WITH_BONUS=1 all

.PHONY: all clean fclean re bonus