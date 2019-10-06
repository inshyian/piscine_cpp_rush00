#include "Core.hpp"

#include <iostream>

int main(void)
{
	Core 	*gameConsole = new Core();

	gameConsole->start();
	// system("leaks -q ft_retro");
	delete gameConsole;
	system("leaks -q ft_retro");
	return 0;
}
