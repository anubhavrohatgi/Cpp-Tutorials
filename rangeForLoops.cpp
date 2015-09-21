/*

	C++11 onwards the C++ also supports Range based for Loops
	This adds more generic nature to the looped blocks

	Used as a more readable equivalent to the traditional for loop
	operating over a range of values, such as all elements in a container.

	The program below also demos the use of keyword auto for variables.

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int numbers[] = { 11, 22, 33, 44, 55 };

	// For each member called number of array numbers - read only 
	for (int number : numbers) {
		cout << number << endl;
	}

	// To modify members, need to use reference (&)
	for (int &number : numbers) {
		number = 99;
	}


	for (int number : numbers) {
		cout << number << endl;
	}

	/* USE OF AUTO in RANGE BASED FOR LOOPS */

	cout << "\n AUTO KEYWORD DEMO \n";

	std::vector<int> v = { 0, 1, 2, 3, 4, 5 };

	for (const int &i : v) // access by const reference
		std::cout << i << ' ';
	std::cout << '\n';

	for (auto i : v) // access by value, the type of i is int
		std::cout << i << ' ';
	std::cout << '\n';

	for (auto&& i : v) // access by reference, the type of i is int&
		std::cout << i << ' ';
	std::cout << '\n';

	for (int n : {0, 1, 2, 3, 4, 5}) // the initializer may be a braced-init-list
		std::cout << n << ' ';
	std::cout << '\n';

	int a[] = { 0, 1, 2, 3, 4, 5 };
	for (int n : a)  // the initializer may be an array
		std::cout << n << ' ';
	std::cout << '\n';



	system("pause");

	return 0;
}