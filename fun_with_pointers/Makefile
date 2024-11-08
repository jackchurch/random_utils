NAME	= a.out
CC		= GCC
CFLAGS	= -Wall -Wextra -Werror
DEBUG	= -g -O0

CFILES	= main.c

OBJECTS	= $(patsubst %.c,%.o,$(CFILES))

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(DEBUG) -o $@ $^

%.o:%.c
	$(CC) $(DEBUG) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all %.o $(NAME) clean fclean re