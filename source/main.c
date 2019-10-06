#include "Core.hpp"

#include <iostream>

int main(void)
{

	Game *game1 = new Game();
	game1->start();

	// system("leaks ft_retro");
	delete game1;
	return 0;
}
