NAME		= libftprintf.a

GREEN		= \033[0;32m
RED			= \033[0;31m
RESET		= \033[0m

LIB_PATH 	= ./include
LIBFT 		= ./libft/libft.a
LIBFTPRINTF	= ${LIB_PATH}/ft_printf.h
LIBS 		= -lftprintf

CC 			= clang

FLAGS 		= -Wall -Werror -Wextra

REMOVE 		= rm -f
INCLUDE 	= -I ${LIB_PATH}

SRCS_PATH	= ./src

SRCS 		= ${SRCS_PATH}/ft_printf.c			\
		${SRCS_PATH}/ft_print_c.c			\
		${SRCS_PATH}/ft_print_d_i.c			\
		${SRCS_PATH}/ft_print_p.c			\
		${SRCS_PATH}/ft_print_s.c			\
		${SRCS_PATH}/ft_print_u.c			\
		${SRCS_PATH}/ft_print_x.c			\
		${SRCS_PATH}/ft_check_lenght_int.c			\
		${SRCS_PATH}/ft_decimal_to_hexadecimal.c
			
OBJS 		= $(SRCS:.c=.o)

all:		${NAME}

${NAME}: 	${OBJS} ${LIBFT}
		@echo "\n$(NAME): $(GREEN)$(NAME) was created$(RESET)"
		ar -rcs ${NAME} ${OBJS}
		@echo

${LIBFT}:
		@echo
		make bonus -C libft
		cp ${LIBFT} ${NAME}

.c.o:
		@echo "\n$(NAME): $(GREEN)object files were created$(RESET)"
		${CC} -c ${FLAGS} $< -o ${<:.c=.o} ${INCLUDE}

clean:
		make clean -C libft
		@echo "\n$(NAME): $(RED)object files were deleted$(RESET)"
		${REMOVE} ${OBJS}
		@echo

fclean:
		make fclean -C libft
		@echo "\n$(NAME): $(RED)object files were deleted$(RESET)"
		${REMOVE} ${OBJS}
		@echo "\n$(NAME): $(RED)$(NAME) was deleted$(RESET)"
		${REMOVE} ${NAME}
		@echo

re :		fclean all

norm:		
		norminette

.PHONY:		all clean fclean re norm