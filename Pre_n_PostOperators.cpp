/*
	Elaborates more on Post and Pre decrement/increment operators
*/

#include <iostream>

using namespace std;

int main()
{
	int mark = 76; // declare and initialize variable of type int

	cout << mark << endl; // 76

	mark++;               // increase by 1 (post-increment)
	cout << mark << endl; // 77

	++mark;               // increase by 1 (pre-increment)
	cout << mark << endl; // 78



	mark = mark + 1;      // also increase by 1 (or mark += 1)
	cout << mark << endl; // 79

	mark--;               // decrease by 1 (post-decrement)
	cout << mark << endl; // 78

	--mark;               // decrease by 1 (pre-decrement)
	cout << mark << endl; // 77

	mark = mark - 1;      // also decrease by 1 (or mark -= 1)
	cout << mark << endl; // 76

	cout << "\nExplanation -- \n";

	cout <<"mark++ = "<< mark++ << endl; // save mark(76); increment mark(77); print old mark(76);

	cout << "\nmark now = " << mark<<endl;
	cout << "++mark = " << ++mark << endl; // increment mark(78); print current mark(78);


	system("pause"); // put the processing for slep until a key is pressed
	return 0;

}