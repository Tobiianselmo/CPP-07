#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T> void iter(T *address, int length, void (*f)(T &))
{
	if (!address || !f)
		return ;
	for (int i = 0; i < length; i++)
		f(address[i]);
}

#endif