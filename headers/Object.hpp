#ifndef OBJECT_HPP
# define OBJECT_HPP

class Object
{
	public:
		Object(void);
		Object(Object const &other);
		Object(int x, int y);
		virtual ~Object();

		virtual Object* clone() const = 0;

		Object &operator =(Object const &other);

		void moveL();
		void moveR();
		void moveU();
		void moveD();

		int getCordX() const;
		int getCordY() const;
		void setCordX(int x);
		void setCordY(int y);
	protected:
		int _x;
		int _y;
};

#endif
