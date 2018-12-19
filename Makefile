# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 17:06:41 by lutsiara          #+#    #+#              #
#    Updated: 2018/12/18 20:52:53 by lutsiara         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Werror -Wextra

SRCDIR = srcs/

INCDIR = includes/

LIBDIR = libft/

LIBSRCS = $(LIBDIR)$(SRCDIR)ft_atoi.c \
		  $(LIBDIR)$(SRCDIR)ft_bzero.c \
		  $(LIBDIR)$(SRCDIR)ft_countword.c \
		  $(LIBDIR)$(SRCDIR)ft_delcontent.c \
		  $(LIBDIR)$(SRCDIR)ft_digitlen.c \
		  $(LIBDIR)$(SRCDIR)ft_isalnum.c \
		  $(LIBDIR)$(SRCDIR)ft_isalpha.c \
		  $(LIBDIR)$(SRCDIR)ft_isascii.c \
		  $(LIBDIR)$(SRCDIR)ft_isdigit.c \
		  $(LIBDIR)$(SRCDIR)ft_islower.c \
		  $(LIBDIR)$(SRCDIR)ft_isprint.c \
		  $(LIBDIR)$(SRCDIR)ft_isspace.c \
		  $(LIBDIR)$(SRCDIR)ft_isupper.c \
		  $(LIBDIR)$(SRCDIR)ft_iswhitespace.c \
		  $(LIBDIR)$(SRCDIR)ft_itoa.c \
		  $(LIBDIR)$(SRCDIR)ft_lstadd.c \
		  $(LIBDIR)$(SRCDIR)ft_lstdel.c \
		  $(LIBDIR)$(SRCDIR)ft_lstdelone.c \
		  $(LIBDIR)$(SRCDIR)ft_lstdup.c \
		  $(LIBDIR)$(SRCDIR)ft_lstdupone.c \
		  $(LIBDIR)$(SRCDIR)ft_lstenqueue.c \
		  $(LIBDIR)$(SRCDIR)ft_lstiter.c \
		  $(LIBDIR)$(SRCDIR)ft_lstmap.c \
		  $(LIBDIR)$(SRCDIR)ft_lstnew.c \
		  $(LIBDIR)$(SRCDIR)ft_memalloc.c \
		  $(LIBDIR)$(SRCDIR)ft_memccpy.c \
		  $(LIBDIR)$(SRCDIR)ft_memchr.c \
		  $(LIBDIR)$(SRCDIR)ft_memcmp.c \
		  $(LIBDIR)$(SRCDIR)ft_memcpy.c \
		  $(LIBDIR)$(SRCDIR)ft_memdel.c \
		  $(LIBDIR)$(SRCDIR)ft_memmove.c \
		  $(LIBDIR)$(SRCDIR)ft_memset.c \
		  $(LIBDIR)$(SRCDIR)ft_putchar.c \
		  $(LIBDIR)$(SRCDIR)ft_putchar_fd.c \
		  $(LIBDIR)$(SRCDIR)ft_putendl.c \
		  $(LIBDIR)$(SRCDIR)ft_putendl_fd.c \
		  $(LIBDIR)$(SRCDIR)ft_putnbr.c \
		  $(LIBDIR)$(SRCDIR)ft_putnbr_fd.c \
		  $(LIBDIR)$(SRCDIR)ft_putstr.c \
		  $(LIBDIR)$(SRCDIR)ft_putstr_fd.c \
		  $(LIBDIR)$(SRCDIR)ft_strcat.c \
		  $(LIBDIR)$(SRCDIR)ft_strchr.c \
		  $(LIBDIR)$(SRCDIR)ft_strclr.c \
		  $(LIBDIR)$(SRCDIR)ft_strcmp.c \
		  $(LIBDIR)$(SRCDIR)ft_strcpy.c \
		  $(LIBDIR)$(SRCDIR)ft_strdel.c \
		  $(LIBDIR)$(SRCDIR)ft_strdup.c \
		  $(LIBDIR)$(SRCDIR)ft_strequ.c \
		  $(LIBDIR)$(SRCDIR)ft_striter.c \
		  $(LIBDIR)$(SRCDIR)ft_striteri.c \
		  $(LIBDIR)$(SRCDIR)ft_strjoin.c \
		  $(LIBDIR)$(SRCDIR)ft_strlcat.c \
		  $(LIBDIR)$(SRCDIR)ft_strlen.c \
		  $(LIBDIR)$(SRCDIR)ft_strmap.c \
		  $(LIBDIR)$(SRCDIR)ft_strmapi.c \
		  $(LIBDIR)$(SRCDIR)ft_strncat.c \
		  $(LIBDIR)$(SRCDIR)ft_strncmp.c \
		  $(LIBDIR)$(SRCDIR)ft_strncpy.c \
		  $(LIBDIR)$(SRCDIR)ft_strnequ.c \
		  $(LIBDIR)$(SRCDIR)ft_strnew.c \
		  $(LIBDIR)$(SRCDIR)ft_strnstr.c \
		  $(LIBDIR)$(SRCDIR)ft_strrchr.c \
		  $(LIBDIR)$(SRCDIR)ft_strsplit.c \
		  $(LIBDIR)$(SRCDIR)ft_strstr.c \
		  $(LIBDIR)$(SRCDIR)ft_strsub.c \
		  $(LIBDIR)$(SRCDIR)ft_strtabdel.c \
		  $(LIBDIR)$(SRCDIR)ft_strtabnew.c \
		  $(LIBDIR)$(SRCDIR)ft_strtrim.c \
		  $(LIBDIR)$(SRCDIR)ft_tolower.c \
		  $(LIBDIR)$(SRCDIR)ft_toupper.c \
		  $(LIBDIR)$(SRCDIR)ft_abs.c \
		  $(LIBDIR)$(SRCDIR)ft_dabs.c \
		  $(LIBDIR)$(SRCDIR)ft_ldabs.c \
		  $(LIBDIR)$(SRCDIR)ft_pow.c \
		  $(LIBDIR)$(SRCDIR)ft_lstipos.c \
		  $(LIBDIR)$(SRCDIR)ft_dmod.c \
		  $(LIBDIR)$(SRCDIR)ft_ldmod.c \
		  $(LIBDIR)$(SRCDIR)ft_ld_ldiglen.c \
		  $(LIBDIR)$(SRCDIR)ft_d_ldiglen.c \
		  $(LIBDIR)$(SRCDIR)ft_ldfrexp.c \
		  $(LIBDIR)$(SRCDIR)ft_dfrexp.c \
		  $(LIBDIR)$(SRCDIR)ft_ldexp.c \
		  $(LIBDIR)$(SRCDIR)ft_dexp.c \
		  $(LIBDIR)$(SRCDIR)ft_ldclassify.c \
		  $(LIBDIR)$(SRCDIR)ft_dclassify.c \
		  $(LIBDIR)$(SRCDIR)ft_ldtoa.c \
		  $(LIBDIR)$(SRCDIR)ft_putwchar.c \
		  $(LIBDIR)$(SRCDIR)ft_putwstr.c \
		  $(LIBDIR)$(SRCDIR)get_next_line.c

LIBOBJS = $(LIBSRCS:.c=.o)

SRCS = $(SRCDIR)ft_printf.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(LIBOBJS) $(OBJS)
	@ar rc $(NAME) $(OBJS) $(LIBOBJS)
	@ranlib $(NAME)
	@echo "make $(NAME)\033[0;32m ✓\033[0m"

all: $(NAME)

%.o: %.c
	@$(CC) -o $@ -c $< -I $(INCDIR) -I $(LIBDIR)$(INCDIR) $(FLAGS)

clean:
	@/bin/rm -rf $(OBJS) $(LIBOBJS)
	@echo "rm *.o\033[0;32m ✓\033[0m"

fclean: clean
	@/bin/rm -rf $(NAME)
	@echo "rm $(NAME)\033[0;32m ✓\033[0m"

re: fclean all

.PHONY: all clean fclean re

.NOTPARALLEL: re
