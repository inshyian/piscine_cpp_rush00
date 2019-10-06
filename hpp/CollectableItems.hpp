#ifndef COLLECTABLEITEMS_HPP
# define COLLECTABLEITEMS_HPP

# include <iostream>

class AItem;

class CollectableItems
{
	
private:
	int _count;
	AItem **_items;

public:
	CollectableItems(void);
	~CollectableItems();
	CollectableItems(CollectableItems const &other);

	CollectableItems &operator =(CollectableItems const &other);

	int		getCount(void) const;
	AItem*	getUnit(int n) const;
	void	setNullUnit(int n);
	int		push(AItem* newItem);

};


#endif