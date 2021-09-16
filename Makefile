# ***********************************

NAME	= libbclst.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -O3
obj		= $(src:%.c=%.o)

.PHONY: all clean fclean re debug sani-debug

# ***********************************

src = \
bclstadd_last.c \
bclstadd_first.c \
bclstclear.c \
bclstdelone.c \
bclstinit.c \
bclstinsert_back.c \
bclstinsert_next.c \
bclstiter.c \
bclstnew.c \
bclstsentry.c \
bclstsize.c \
bclstnull.c \
bclstfirst.c \

# ***********************************

all: $(NAME)

$(NAME): $(obj)
	$(AR) -rc $(NAME) $(obj)
	ranlib $(NAME)

clean:
	$(RM) $(obj)

fclean: clean
	$(RM) $(NAME)

re: fclean all

# ***********************************

debug: fclean
	$(MAKE) CFLAGS="$(CFLAGS) -D DEBUG=1 -g"

sani-debug: fclean
	$(MAKE) CFLAGS="$(CFLAGS) -D DEBUG=1 -g -fsanitize=address"

test: all
	$(MAKE) -C ../libex
	$(MAKE) -C ../libft
	$(CC) $(CFLAGS) -D DEBUG=1 -g -fsanitize=address test/main.c ../libex/libex.a ../libft/libft.a libbclst.a
	./a.out