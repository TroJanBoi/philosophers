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

SRCS	=	src/main.c

OBJS	= ${SRCS:.c=.o}

all: $(NAME) 

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(HEADERS) -o $(NAME)

%.o: %.c $(HEADER_FILE)
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS)  && printf "Compiling: $(notdir $<) \n"
	@printf "\033[0;32m[OK]\033[0m\n"

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: clean all

.PHONY: all, clean, fclean, re