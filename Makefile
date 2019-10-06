NAME = ft_retro

SRC = 	main.cpp \
		Player.cpp \
		Game.cpp \
		CollectableItems.cpp \
		Steroid.cpp \
		AItem.cpp \
		Bullet.cpp \
		SmallEnemy.cpp


OBJ = $(addprefix obj/, $(SRC:.cpp=.o))

HEADERS = 	hpp/Player.hpp \
			hpp/Game.hpp \
			hpp/CollectableItems.hpp \
			hpp/Steroid.hpp \
			hpp/AItem.hpp \
			hpp/Bullet.hpp \
			hpp/SmallEnemy.hpp

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
