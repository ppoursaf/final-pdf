# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppoursaf <ppoursaf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/07 06:03:49 by ppoursaf          #+#    #+#              #
#    Updated: 2017/07/09 10:23:39 by ppoursaf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRC_PATH = ./libft/

SRCS_FDF = main.c swag.c bonus.c

FLAGS =  -framework OpenGL -framework AppKit

all: $(NAME)

$(NAME):
	@echo " ----------------------------------------------------------------"
	@echo "|         FDF MAKEFILE // PLEASE WAIT A MOMENT PLEASE           |"
	@echo "|----------------------------------------------------------------"
	@echo "| \033[34m Making the project $(NAME) ==> 25% ...\033[m            "
	@make -C $(SRC_PATH)
	@echo "| \033[33m Making the project $(NAME) ==> 50% ...\033[m            "
	@gcc  -o $(NAME) $(FLAGS) ./minilibx/libmlx.a ./libft/libft.a $(SRCS_FDF)
	@echo "| \033[34m Making the project $(NAME) ==> 75% ...\033[m            "
	@echo "| \033[33m Making the project $(NAME) ==> 100% ...\033[m           "
	@echo "|----------------------------------------------------------------"
	@echo "| \033[32m         	      COMPILATION FINISHED   \033[m                    |"
	@echo " ----------------------------------------------------------------"

clean:
	@echo " ----------------------------------------------------------------"
	@echo "|         FDF MAKEFILE // PLEASE WAIT A MOMENT PLEASE           |"
	@echo "|----------------------------------------------------------------"
	@echo "| \033[33m Cleaning ..............\033[m                          "
	@make clean -C $(SRC_PATH)
	@echo "| \033[33m Cleaning ..............\033[m                          "
	@echo "|----------------------------------------------------------------"
	@echo "| \033[32m         	         CLEAN FINISHED   \033[m                      |"
	@echo " ----------------------------------------------------------------"

fclean: clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f ./libft/libft.a

re: fclean all
