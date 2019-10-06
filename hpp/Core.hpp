#ifndef CORE_HPP
# define CORE_HPP

# include <ncurses.h>
# include "Player.hpp"
# include <fstream>


class CollectableItems;

class Core
{

private:
	static const int COLUMNS = 180;
	static const int LINES = 40;
	
	time_t _startGame;

	double _lastTime;
	double _enemyTime;

	WINDOW *_win;
	WINDOW *_info;


	Player *_player;
	int _score;

	CollectableItems *_steroids;
	CollectableItems *_bullets;
	CollectableItems *_enemies;

public:
	Core(void);
	Core(Core const &other);
	~Core();

	Core &operator =(Core const &other);
	void start();

	void printInfo();

	bool checkPenetration(AItem *enemy);
	bool checkCollision(AItem *enemy);

	void moveEnemies();
};




#endif
