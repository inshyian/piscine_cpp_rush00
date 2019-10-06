NAME = ft_retro

SRC = 	main.cpp \
		Player.cpp \
		Core.cpp \
		CollectableItems.cpp \
		Star.cpp \
		AItem.cpp \
		Bullet.cpp \
		Enemy.cpp


OBJ = $(addprefix obj/, $(SRC:.cpp=.o))

HEADERS = 	hpp/Player.hpp \
			hpp/Core.hpp \
			hpp/CollectableItems.hpp \
			hpp/Star.hpp \
			hpp/AItem.hpp \
			hpp/Bullet.hpp \
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
