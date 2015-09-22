/*
	The following program shows how to access elements of an array using pointers.
	The fact is that the elements can be accessed using the address of the first element
	and then consecutive elements can be accessed by adding the relative integer values.

	N.B Array elements are stored in continuous memory locations. 

*/


#include <iostream>

using namespace std;

int main()
{
	int number[5] = { 29, 55, 44, 88, 99 };

	cout << number[4] << endl;
	cout << *(number + 4) << endl; // address of the first element added to the number 4 means that the called element is at index 4 (0+4)
	cout << *(number) << endl;
	system("pause");
	return 0;
}
