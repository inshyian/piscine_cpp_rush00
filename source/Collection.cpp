#include "Collection.hpp"

#include "Object.hpp"

Collection::Collection(void)
{
	_count = 0;
}

Collection::~Collection()
{

}

Collection::Collection(Collection const &assign)
{
	*this = assign;
}

Collection &Collection::operator =(Collection const &assign)
{
	if (this != &assign)
	{
		if (_count > 0)
		{
			for (int i = 0; i < _count; i++)
				delete _items[i];
			delete _items;
		
		_count = assign._count;

		_items = new Object*[_count];
		for (int i = 0; i < _count; i++)
			this->_items[i] = assign.getUnit(i)->clone();
		}
	}
	return *this;
}

Object*	Collection::getUnit(int n) const
{
	if (n < 0 || n > _count)
		return (NULL);
	return _items[n];
}

void	Collection::setNullUnit(int n)
{
	if (n < 0 || n > _count)
		return ;
	delete _items[n];
	_items[n] = NULL;
}


int	Collection::getCount(void) const
{
	return _count;
}

int	Collection::push(Object* newItem)
{
	if (newItem == NULL)
		return _count;
	for (int i = 0; i < _count; i++)
	{
		if (_items[i] == newItem)
		{
			std::cout << "Item already in Collection." << std::endl;
			return _count;
		}
	}

	Object **container;

	if (_count == 0)
	{		
		container = new Object*[1];
		container[0] = newItem;
		_items = container;
		_count++;
	}
	else
	{
		_count++;
		int i = 0;
		container = new Object*[_count];
		for (; i < (_count - 1); i++)
			container[i] = _items[i];
		container[i] = newItem;
		delete _items;
		_items = container;
	}
	return _count;
}
