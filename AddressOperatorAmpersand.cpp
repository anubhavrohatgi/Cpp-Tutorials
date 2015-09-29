/*
	This program gives an insight to the usage of the ampersand & operator.
	How it references to the address in the memory.

		
*/


#include <iostream>

using namespace std;

int main()
{
	int a = 12, b = 20;

	cout << a << endl;
	cout <<"\nAddress = "<< &a << endl;

	cout << b << endl;
	cout << "\nAddress = " << &b << endl;

	system("pause");

	return 0;
}