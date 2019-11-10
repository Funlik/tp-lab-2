#ifndef Task1_h
#define Task1_h
#include <iostream>
#include <cstring>


template <typename T>
bool cmp(T a, T b){
	return a < b;
}
template<>
bool cmp(char* a, char* b){
	return strlen(a) < strlen(b);
}


template <class T>
void msort(T *a, size_t n){
	size_t mid = n/2;
	if (n>1){
		msort(a, mid);
		msort(a + mid, n - mid);
	}
	size_t left = 0;
	size_t right = n / 2;
	T* result = new T[(n)];
	for (size_t i = 0; i < n; i++){
		if ((right >= n) || ((left < n/2) && (cmp(a[left], a[right])))){
			result[i] = a[left];
			left++;
		}
		else {
			result[i] = a[right];
			right++;
		}
	}
	for (size_t i = 0; i < n; i++){
		a[i] = result[i];
	}
}
#endif