NAME = libft.a
CFLAGS += -c -Wall -Wextra -Werror
CFILES =	ft_putchar.c	\
			ft_putnbr.c		\
			ft_putstr.c		\
			ft_strlen.c		\
			ft_strcpy.c		\
			ft_isdigit.c	\
			ft_atoi.c		\
			ft_strcat.c		\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_strcmp.c		\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isalpha.c	\
			ft_isspace.c	\
			ft_itoa.c		\
			ft_isprint.c	\
			ft_memset.c		\
			ft_strchr.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memccpy.c	\
			ft_memmove.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_strdup.c		\
			ft_strncpy.c	\
			ft_strncat.c	\
			ft_strlcat.c	\
			ft_strrchr.c	\
			ft_strncmp.c	\
			ft_strstr.c		\
			ft_strnstr.c	\
			ft_memalloc.c	\
			ft_memdel.c		\
			ft_strnew.c		\
			ft_strdel.c		\
			ft_strclr.c		\
			ft_striter.c	\
			ft_striteri.c	\
			ft_strnequ.c	\
			ft_strequ.c		\
			ft_strsub.c		\
			ft_strmap.c		\
			ft_strmapi.c	\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_strsplit.c	\
			ft_putendl_fd.c	\
			ft_putstr_fd.c	\
			ft_putchar_fd.c	\
			ft_putnbr_fd.c	\
			ft_putendl.c

OFILES = $(CFILES:.c=.o)
CC = gcc

all: $(NAME)

$(NAME): $(OFILES)
	ar -rc $(NAME) $(OFILES)

$(OFILES): $(CFILES)
	$(CC) $(CFLAGS) $(CFILES)

clean:
	/bin/rm -rf $(OFILES)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all clean re library fclean
