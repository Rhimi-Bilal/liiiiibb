$(NAME) = libft.a
all: $(NAME)


libft.a: %.o
CC = cc 
CFLAGS = -Wall -Wextra -Werror
AR = ar 

%.o: %.c
	$$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf %.o

fclean: clean
	rm -rf libft.a

re: fclean all