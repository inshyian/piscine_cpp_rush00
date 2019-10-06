#include "Core.hpp"

#include <iostream>

int main(void)
{
	Core 	*gameConsole = new Core();

	gameConsole->start();
	delete gameConsole;
	system("leaks -q ft_retro");
	return 0;
}
