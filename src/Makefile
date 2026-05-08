NAME = libftprintf.a
SRCS =  ft_putchar.c ft_putnbr_base.c ft_putnbr.c \
	ft_putstr.c ft_putunsigned.c ft_putptr.c ft_printf.c
OBJS =  ft_putchar.o ft_putnbr_base.o ft_putnbr.o \
	ft_putstr.o ft_putunsigned.o ft_putptr.o ft_printf.o
	
all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c
	cc -Wall -Wextra -Werror -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f libftprintf.a

re : fclean all

.PHONY : all clean fclean re
