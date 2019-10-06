#ifndef OBJECT_HPP
# define OBJECT_HPP

class Object
{

public:
	Object(void);
	Object(Object const &other);
	Object(int x, int y);
	virtual ~Object();

	Object &operator =(Object const &other);

	virtual Object* clone() const = 0;

	int getCordX() const;
	int getCordY() const;

	void moveL();
	void moveR();
	void moveU();
	void moveD();

	void setX(int x);
	void setY(int y);

	protected:
		int _x;
		int _y;
};

#endif
