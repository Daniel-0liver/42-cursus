NAME = libft.a

SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_memset.c ft_strlen.c ft_bzero.c \
ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
ft_strncmp.c ft_memchr.c ft_memcmp.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(SRC) 
	@gcc -Wall -Wextra -Werror -c $(SRC)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ) 
	@rm -f *.exe

fclean: clean
	@rm -f $(NAME)

re: fclean all