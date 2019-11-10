#ifndef Task2_h
#define Task2_h

#include <cstring>
#include <iostream>
template <typename T, const int n>
T* createArr(T(*gen)())
{
	T *arr = new T[n];
	for (size_t i = 0; i < n; i++)
	{
		arr[i] = gen();
	}
	return arr;
}
#endif