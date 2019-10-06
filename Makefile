NAME = ft_retro

SRC = 	main.cpp \
		Player.cpp \
		Core.cpp \
		Collection.cpp \
		Star.cpp \
		AItem.cpp \
		Amo.cpp \
		Enemy.cpp


OBJ = $(addprefix obj/, $(SRC:.cpp=.o))

HEADERS = 	hpp/Player.hpp \
			hpp/Core.hpp \
			hpp/Collection.hpp \
			hpp/Star.hpp \
			hpp/AItem.hpp \
			hpp/Amo.hpp \
			hpp/Enemy.hpp


FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): obj $(OBJ)
	clang++ $(OBJ) -o $(NAME) -lncurses
	
obj/%.o: src/%.cpp $(HEADERS)
	clang++ $(FLAGS) -c $< -o $@ -I hpp

obj:
	@mkdir obj

clean:
	@rm -rf obj

fclean: clean
	rm -rf $(NAME)

re: fclean all
