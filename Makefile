NAME = Libft.a

SOURCES = Part_1_Libc/ft_memset.c \
		  Part_1_Libc/ft_bzero.c \
		  Part_1_Libc/ft_memcpy.c \
		  Part_1_Libc/ft_memccpy.c \
		  Part_1_Libc/ft_memchr.c \
		  Part_1_Libc/ft_memcmp.c \
		  Part_1_Libc/ft_strlen.c \
		  Part_1_Libc/ft_strdup.c \
		  Part_1_Libc/ft_strcpy.c \
		  Part_1_Libc/ft_strncpy.c \
		  Part_1_Libc/ft_strcat.c \
		  Part_1_Libc/ft_strncat.c \
		  Part_1_Libc/ft_strlcat.c \
		  Part_1_Libc/ft_strchr.c \
		  Part_1_Libc/ft_strrchr.c \
		  Part_1_Libc/ft_strstr.c \
		  Part_1_Libc/ft_strnstr.c \
		  Part_1_Libc/ft_strcmp.c \
		  Part_1_Libc/ft_strncmp.c \
		  Part_1_Libc/ft_atoi.c \
		  Part_1_Libc/ft_isalpha.c \
		  Part_1_Libc/ft_isdigit.c \
		  Part_1_Libc/ft_isascii.c \
		  Part_1_Libc/ft_isprint.c \
		  Part_1_Libc/ft_toupper.c \
		  Part_1_Libc/ft_tolower.c \
		  \
		  Part_2_Libc/ft_memalloc.c \
		  Part_2_Libc/ft_memdel.c \
		  Part_2_Libc/ft_strnew.c \
		  Part_2_Libc/ft_strdel.c \
		  Part_2_Libc/ft_strclr.c \
		  Part_2_Libc/ft_striter.c \
		  Part_2_Libc/ft_striteri.c \
		  Part_2_Libc/ft_strmap.c \
		  Part_2_Libc/ft_strmapi.c \
		  Part_2_Libc/ft_strequ.c \
		  Part_2_Libc/ft_strnequ.c \
		  Part_2_Libc/ft_strsub.c \
		  Part_2_Libc/ft_strjoin.c \
		  Part_2_Libc/ft_strtrim.c \
		  Part_2_Libc/ft_strsplit.c \
		  Part_2_Libc/ft_itoa.c \
		  Part_2_Libc/ft_putchar.c \
		  Part_2_Libc/ft_putstr.c \
		  Part_2_Libc/ft_putendl.c \
		  Part_2_Libc/ft_putnbr.c \
		  Part_2_Libc/ft_putchar_fd.c \
		  Part_2_Libc/ft_putstr_fd.c \
		  Part_2_Libc/ft_putendl_fd.c \
		  Part_2_Libc/ft_putnbr_fd.c \

OBJECTS = Objects/*.o

INCLUDES = Includes/Headers.h Includes/Projects.h

CC = gcc

CFLAGS = -Wall -Wextra -Werror -c

$(NAME) :
	$(CC) $(CFLAGS) $(SOURCES) -I $(INCLUDES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean :
	/bin/rm -f $(OBJECTS)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
