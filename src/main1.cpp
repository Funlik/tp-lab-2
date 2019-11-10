#include <iostream>
#include "task1.h"
#include "string.h"
using namespace std;

int main()
{
	int* a = new int[10]{1, 13, 45, 101, 432, 9000, 88, 7, 36, 3};
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n";
	msort(a, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n";
	char* b[10]{(char*)"qqqq", (char*)"qq", (char*)"qqq", (char*)"qqqq", (char*)"q", (char*)"q", (char*)"qq", (char*)"tttttt", (char*)"qtqtqtqtqt", (char*)"tt"};
	for (int i = 0; i < 10; i++){
		cout << b[i] << " ";
	}
	cout << "\n";
	msort(b, 10);
	for (int i = 0; i < 10; i++){
		cout << b[i] << " ";
	}
	return 0;
}