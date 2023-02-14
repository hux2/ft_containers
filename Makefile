# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hhwang <hhwang@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/08 19:34:12 by hhwang            #+#    #+#              #
#    Updated: 2023/02/13 13:08:37 by hhwang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 						= 	ft_containers

CXX							=	c++
# CXXFLAGS					=	-Wall -Wextra -Werror -std=c++98
CXXFLAGS					=	-g -fsanitize=address -std=c++98
SRCS						=	my_main.cpp				\


OBJS						=	$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME)		: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

clean:
	rm -rf $(OBJS)

fclean:
	make clean
	rm -rf $(NAME)

re: 
	make fclean
	make all

.PHONY: all clean fclean re
