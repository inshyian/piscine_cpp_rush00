#ifndef COLLECTION_HPP
# define COLLECTION_HPP

# include <iostream>

class AItem;

class Collection
{
	
private:
	int _count;
	AItem **_items;

public:
	Collection(void);
	~Collection();
	Collection(Collection const &other);

	Collection &operator =(Collection const &other);

	int		getCount(void) const;
	AItem*	getUnit(int n) const;
	void	setNullUnit(int n);
	int		push(AItem* newItem);

};


#endif