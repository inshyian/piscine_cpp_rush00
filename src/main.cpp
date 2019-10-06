#include "Core.hpp"

#include <iostream>

int main(void)
{

	Core *game1 = new Core();
	game1->start();

	// system("leaks ft_retro");
	delete game1;
	return 0;
}
