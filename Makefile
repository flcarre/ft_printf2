# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 17:06:41 by lutsiara          #+#    #+#              #
#    Updated: 2019/02/13 21:16:18 by lutsiara         ###   ########.fr        #
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
		  $(LIBDIR)$(SRCDIR)ft_digitlen.c \
		  $(LIBDIR)$(SRCDIR)ft_memalloc.c \
		  $(LIBDIR)$(SRCDIR)ft_memccpy.c \
		  $(LIBDIR)$(SRCDIR)ft_memchr.c \
		  $(LIBDIR)$(SRCDIR)ft_memcmp.c \
		  $(LIBDIR)$(SRCDIR)ft_memcpy.c \
		  $(LIBDIR)$(SRCDIR)ft_memdel.c \
		  $(LIBDIR)$(SRCDIR)ft_memmove.c \
		  $(LIBDIR)$(SRCDIR)ft_memset.c \
		  $(LIBDIR)$(SRCDIR)ft_iputchar.c \
		  $(LIBDIR)$(SRCDIR)ft_iputxchar.c \
		  $(LIBDIR)$(SRCDIR)ft_iputnbr_base.c \
		  $(LIBDIR)$(SRCDIR)ft_iputunbr_base.c \
		  $(LIBDIR)$(SRCDIR)ft_iputstr.c \
		  $(LIBDIR)$(SRCDIR)ft_iputnstr.c \
		  $(LIBDIR)$(SRCDIR)ft_strcmp.c \
		  $(LIBDIR)$(SRCDIR)ft_strlen.c \
		  $(LIBDIR)$(SRCDIR)ft_strncmp.c \
		  $(LIBDIR)$(SRCDIR)ft_strchr.c \
		  $(LIBDIR)$(SRCDIR)ft_strrchr.c \
		  $(LIBDIR)$(SRCDIR)ft_dmod.c \
		  $(LIBDIR)$(SRCDIR)ft_ldmod.c \
		  $(LIBDIR)$(SRCDIR)ft_dabs.c \
		  $(LIBDIR)$(SRCDIR)ft_ldabs.c \
		  $(LIBDIR)$(SRCDIR)ft_ldfrexp.c \
		  $(LIBDIR)$(SRCDIR)ft_dfrexp.c \
		  $(LIBDIR)$(SRCDIR)ft_ldexp.c \
		  $(LIBDIR)$(SRCDIR)ft_dexp.c \
		  $(LIBDIR)$(SRCDIR)ft_isnan.c \
		  $(LIBDIR)$(SRCDIR)ft_isinf.c \
		  $(LIBDIR)$(SRCDIR)ft_isdigit.c \
		  $(LIBDIR)$(SRCDIR)ft_isspace.c \
		  $(LIBDIR)$(SRCDIR)ft_dclassify.c \
		  $(LIBDIR)$(SRCDIR)ft_signbit.c \
		  $(LIBDIR)$(SRCDIR)ft_iputwchar.c \
		  $(LIBDIR)$(SRCDIR)ft_iputwstr.c \
		  $(LIBDIR)$(SRCDIR)ft_atoui.c \
		  $(LIBDIR)$(SRCDIR)ft_ull.c \
		  $(LIBDIR)$(SRCDIR)ft_udigitlen.c

LIBOBJS = $(LIBSRCS:.c=.o)

SRCS = #$(SRCDIR)ft_printf.c \
#	   $(SRCDIR)ft_parse.c \
#	   $(SRCDIR)ft_parseid.c \
#	   $(SRCDIR)ft_isid.c \
#	   $(SRCDIR)ft_idisnull.c \
#	   $(SRCDIR)ft_iscolor.c \
#	   $(SRCDIR)ft_lmprocess.c \
#	   $(SRCDIR)ft_isfm.c \
#	   $(SRCDIR)ft_newid.c \
#	   $(SRCDIR)ft_getarg.c \
#	   $(SRCDIR)ft_get1.c \
#	   $(SRCDIR)ft_get2.c \
#	   $(SRCDIR)ft_get3.c \
#	   $(SRCDIR)ft_get4.c \
#	   $(SRCDIR)ft_storetolist.c \
#	   $(SRCDIR)ft_enqueueid.c \
#	   $(SRCDIR)ft_color.c \
#	   $(SRCDIR)ft_delid.c \
#	   $(SRCDIR)ft_dies.c \
#	   $(SRCDIR)ft_fm.c \
#	   $(SRCDIR)ft_minus.c \
#	   $(SRCDIR)ft_plus.c \
#	   $(SRCDIR)ft_precprocess.c \
#	   $(SRCDIR)ft_eprocess.c \
#	   $(SRCDIR)ft_erounding.c \
#	   $(SRCDIR)ft_frounding.c \
#	   $(SRCDIR)ft_print.c \
#	   $(SRCDIR)ft_signconv.c \
#	   $(SRCDIR)ft_space.c \
#	   $(SRCDIR)ft_widthprocess.c \
#	   $(SRCDIR)ft_zero.c

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
