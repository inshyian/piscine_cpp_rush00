#ifndef AITEM_HPP
# define AITEM_HPP

class AItem
{
protected:
	int _x;
	int _y;

public:
	AItem(void);
	AItem(AItem const &other);
	AItem(int x, int y);
	virtual ~AItem();

	AItem &operator =(AItem const &other);

	virtual AItem* clone() const = 0;

	void moveLeft();
	void moveRight();
	void moveUp();
	void moveDown();
	int getX() const;
	int getY() const;

	void setX(int x);
	void setY(int y);

};

#endif