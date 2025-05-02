# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/10 19:05:16 by pesrisaw          #+#    #+#              #
#    Updated: 2024/07/11 17:00:54 by pesrisaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= philo
# CFLAGS	= -Wextra -Wall -Werror -g
CFLAGS	= -g
PTF		= ./ft_printf

HEADERS	= -I $(PTF)

SRCS	=	src/test.c \
			src/main.c
			

OBJS	= ${SRCS:.c=.o}

all: $(NAME) 

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(HEADERS) -o $(NAME)
	@printf "[\033[0;32mOK\033[0m] \033[0;33mBuild Complete\033[0m: \033[0;34mphilo\033[0m\n"

%.o: %.c $(HEADER_FILE)
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS)  && printf "\033[0;32mCompiling\033[0m:\033[0;33m $(notdir $<)\033[0m\n"

clean:
	@rm -f $(OBJS)
	@printf "[\033[0;32mCLEAN OK\033[0m]\n"

fclean: clean
	@rm -rf $(NAME)

re: clean all

.PHONY: all, clean, fclean, re