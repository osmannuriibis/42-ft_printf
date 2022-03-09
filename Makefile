NAME 		=	libftprintf.a

CC 			= 	clang
CFLAGS 		=	-Wall -Wextra -Werror -c

RM 			=	rm -rf

ARCHIVE		=	ar -rcs

SOURCE 		=	ft_printf.c			\
				ft_printf_utils.c	\
				put_alphanum.c		\
				put_hex_pointer.c

OBJECTS		=	$(SOURCE:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJECTS)
	@$(ARCHIVE) $(NAME) $(OBJECTS)

$(OBJECTS):	$(SOURCE)
	@$(CC) $(CFLAGS) $(SOURCE) 


clean:
	@$(RM) $(OBJECTS)
	@$(RM) ./a.out

fclean: clean
	@$(RM) $(NAME)

test:
	
	

re:
	fclean all

.PHONY: all clean fclean re
	