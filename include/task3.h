#ifndef Task3_h
#define Task3_h
#include <iostream>
template<typename T, const int n>
void *map(T *arr, T(*change)(T))
{
	for (int i = 0; i < n; i++)
		arr[i] = change(arr[i]);
	return arr;
}
#endif