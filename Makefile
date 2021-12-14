NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
C_FILES =  src/print_c.c  src/print_d.c  src/print_i.c  src/print_p.c  src/print_s.c \
		src/print_u.c src/print_lowx.c src/print_topx.c utils/utils.c ft_printf.c 
RM = rm -rf
AR = ar -rcs
O_FILES = $(C_FILES:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -I . -c $< -o ${<:.c=.o}

$(NAME) : $(O_FILES)
	$(AR) $(NAME) $(O_FILES)

clean :
	$(RM) $(O_FILES)

fclean : clean
	$(RM) $(NAME)

re : fclean all
