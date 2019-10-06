#ifndef COLLECTION_HPP
# define COLLECTION_HPP

# include <iostream>

class Object;

class Collection
{	
	public:
		Collection(void);
		~Colletion();
		Collection(Collection const &other);

		Collection &operator =(Collection const &other);

		int		getCount(void) const;
		AItem*	getUnit(int n) const;
		void	setNullUnit(int n);
		int		push(Object* objectNew);

	private:
		int _count;
		Object **_items;
};


#endif
