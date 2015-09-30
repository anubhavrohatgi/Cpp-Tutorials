/*
	The snippet shows how to pass the dynamically allocated memory 
	as a return value by reference from a function.

	Never Pass a function's local variable as return value by reference.
*/


#include <iostream>
using namespace std;

//Correct Methods
int *squarePtr(int);
int &squareRef(int);

//Wrong Methods - They will issue warning but not errors
//Please avoid this type of logical errors
int *squarePtrW(int);
int &squareRefW(int);

int main() {
	int number = 8;
	cout << number << endl;  // 8
	cout << *squarePtr(number) << endl;  // 64
	cout << squareRef(number) << endl;   // 64

	cout << "\n\nWrong Methods : \n";
	cout << *squarePtrW(number) << endl;  // 64
	cout << squareRefW(number) << endl;   // 64


	system("pause");

	return 0;
}

//Returned as a pointer - Correct Method
int * squarePtr(int number) {
	int * dynamicAllocatedResult = new int(number * number);
	return dynamicAllocatedResult;
}


//Returned as a reference - Correct Method
int & squareRef(int number) {
	int * dynamicAllocatedResult = new int(number * number);
	return *dynamicAllocatedResult;
}


//Returned as a pointer - Wrong Method
int * squarePtrW(int number) {
	int localResult = number * number;
	return &localResult;
	// warning: address of local variable 'localResult' returned
}

//Returned as a reference - Wrong Method
int & squareRefW(int number) {
	int localResult = number * number;
	return localResult;
	// warning: reference of local variable 'localResult' returned
}