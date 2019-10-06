#include "CollectableItems.hpp"

#include "AItem.hpp"

CollectableItems::CollectableItems(void)
{
	_count = 0;
}

CollectableItems::~CollectableItems()
{

}

CollectableItems::CollectableItems(CollectableItems const &other)
{
	*this = other;
}

CollectableItems &CollectableItems::operator =(CollectableItems const &other)
{
	if (this != &other)
	{
		if (_count > 0)
		{
			for (int i = 0; i < _count; i++)
				delete _items[i];
			delete _items;
		
		_count = other._count;

		_items = new AItem*[_count];
		for (int i = 0; i < _count; i++)
			this->_items[i] = other.getUnit(i)->clone();
		}
	}
	return *this;
}

AItem*	CollectableItems::getUnit(int n) const
{
	if (n < 0 || n > _count)
		return (NULL);
	return _items[n];
}

void	CollectableItems::setNullUnit(int n)
{
	if (n < 0 || n > _count)
		return ;
	delete _items[n];
	_items[n] = NULL;
}


int	CollectableItems::getCount(void) const
{
	return _count;
}

int	CollectableItems::push(AItem* newItem)
{
	if (newItem == NULL)
		return _count;
	for (int i = 0; i < _count; i++)
	{
		if (_items[i] == newItem)
		{
			std::cout << "Item already in CollectableItems." << std::endl;
			return _count;
		}
	}

	AItem **container;

	if (_count == 0)
	{		
		container = new AItem*[1];
		container[0] = newItem;
		_items = container;
		_count++;
	}
	else
	{
		_count++;
		int i = 0;
		container = new AItem*[_count];
		for (; i < (_count - 1); i++)
			container[i] = _items[i];
		container[i] = newItem;
		delete _items;
		_items = container;
	}
	return _count;
}