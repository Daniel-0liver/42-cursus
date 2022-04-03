NAME = libftprintf.a
SRC = ./src
INCLUDE = ./include
LIBFT = ./libft
OBJ = ./obj
FLAGS = -Wall -Wextra -Werror
CC = gcc

all:
	gcc -c $(libft)/*c -I $(INCLUDE)
	gcc main.c -I INCLUDE

$(OBJ)/%.o: $(SRC)/%.c $(INCLUDE)/%.h
	$(CC) $(FLAGS) -c $< -I $(INCLUDE) -o $@

run:
	@gcc ./src/*.c ./libft/*.c main.c -I ./include -o main && ./main