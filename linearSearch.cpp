/*
	Search an array for the given key using Linear Search 
*/

#include <iostream>
using namespace std;

int linearSearch(const int a[], int size, int key);

int main() {
	const int SIZE = 8;
	int a1[SIZE] = { 8, 4, 5, 3, 2, 9, 4, 1 };

	cout <<"\nElement 8 At index = "<< linearSearch(a1, SIZE, 8) << endl;  // 0
	cout <<"\nElement 4 At index = " << linearSearch(a1, SIZE, 4) << endl;  // 1
	cout <<"\nElement 99 At index = " << linearSearch(a1, SIZE, 99) << endl; // 8 (not found)


	system("pause");
}

// Search the array for the given key
// If found, return array index [0, size-1]; otherwise, return size
int linearSearch(const int a[], int size, int key) {
	for (int i = 0; i < size; ++i) {
		if (a[i] == key) return i;
	}
	return size;
}