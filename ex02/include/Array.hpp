#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
	private:
		T *arr;
		int _size;
	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array(const Array &other);
		Array &operator=(const Array &other);
		T &operator[](int index);
		int size(void);
};

#include "Array.tpp"

#endif