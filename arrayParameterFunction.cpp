/*
	Arrays are passed by reference to the functions along with their size.
*/


#include <iostream>
using namespace std;

// Function prototypes
void inc(int array[], int size);
void print(int array[], int size);

// Test Driver
int main() {
	int a1[] = { 8, 4, 5, 3, 2 };

	// Before increment
	print(a1, 5);   // {8,4,5,3,2}
	// Do increment
	inc(a1, 5);     // Array is passed by reference (having side effect)
	// After increment
	print(a1, 5);   // {9,5,6,4,3}


	system("pause");
}

// Function definitions

// Increment each element of the given array
void inc(int array[], int size) {  // array[] is not const
	for (int i = 0; i < size; ++i) {
		array[i]++;  // side-effect
	}
}

// Print the contents of the given array
void print(int array[], int size) {
	cout << "{";
	for (int i = 0; i < size; ++i) {
		cout << array[i];
		if (i < size - 1) {
			cout << ",";
		}
	}
	cout << "}" << endl;
}