#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
	std::cout << "Array default constructor called." << std::endl;
	this->arr = new T[0];
	this->_size = 0;
}

template<typename T>
Array<T>::~Array()
{
	std::cout << "Array default destructor called." << std::endl;
	delete[] this->arr;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	std::cout << "Array constructor with size " << n << " called." << std::endl;
	this->arr = new T[n];
	this->_size = n;
}

template<typename T>
Array<T>::Array(const Array &other)
{
	std::cout << "Array copy constructor called." << std::endl;
	*this = other;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	std::cout << "Array copy assignment operator called." << std::endl;
	if (this != &other)
	{
		this->arr = new T[other._size];
		for (int i = 0; i < other._size; i++)
			this->arr[i] = other.arr[i];
		this->_size = other._size;
	}
	return (*this);
}

template<class T>
T &Array<T>::operator[](int index)
{
	if (index < 0 || index > this->_size)
		throw (std::out_of_range("index out of range."));
	else
		return (this->arr[index]);
}

template<class T>
int Array<T>::size(void)
{
	return (this->_size);
}