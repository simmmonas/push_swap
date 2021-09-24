# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ssemanco <ssemanco@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/09/16 22:24:32 by ssemanco      #+#    #+#                  #
#    Updated: 2021/09/20 20:20:55 by ssemanco      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CFLAGS = -Wall -Wextra -Werror

SRC =	main.c \
		create_stack.c \
		free.c \
		helper.c  \
		index_help.c \
		parser.c \
		push.c \
		reverse.c \
		rotate.c \
		small_sort.c \
		sorting.c \
		swap.c \
		unclass.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	cd incl/libft/ && $(MAKE)
	gcc -o $(NAME) $(OBJ) incl/libft/libft.a 

%.o:%.c
	gcc $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)
	cd incl/libft/ && $(MAKE) clean

fclean: clean
	rm -f $(NAME)
	cd incl/libft/ && rm -f libft.a

re: fclean all
