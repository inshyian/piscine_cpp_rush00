#ifndef OBJECT_HPP
# define OBJECT_HPP

class Object
{
protected:
	int _x;
	int _y;
	char _character;

public:
	Object(void);
	Object(Object const &other);
	Object(int x, int y, char character);
	virtual ~Object();

	Object &operator =(Object const &other);

	virtual Object* clone() const = 0;

	void moveLeft();
	void moveRight();
	void moveUp();
	void moveDown();
	int getX() const;
	int getY() const;

	void setX(int x);
	void setY(int y);

	char getCharacter();
};

#endif
