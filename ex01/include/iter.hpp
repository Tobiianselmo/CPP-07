#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename F>
void iter(T *address, int length, F func)
{
	if (!address)
		return ;
	for (int i = 0; i < length; i++)
		func(address[i]);
}

#endif