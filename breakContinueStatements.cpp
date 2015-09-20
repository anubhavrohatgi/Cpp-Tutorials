/*
	The break statement breaks out and exits the current (innermost) loop.
	The continue statement aborts the current iteration and continue to the next
	iteration of the current (innermost) loop.
	break and continue are poor structures as they are hard to read and hard to follow.
	Use them only if absolutely necessary. You can always write the same program without 
	using break and continue.

*/


#include <iostream>
using namespace std;

/*Mystery Series*/

int main()
{
	int number = 1;
	while (true) {
		++number;

		if ((number % 3) == 0) 
			continue;

		if (number == 133)
			break;

		if ((number % 2) == 0) {
			number += 3;
		}
		else {
			number -= 3;
		}
		cout << number << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}