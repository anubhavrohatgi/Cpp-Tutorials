//Swap to variables using reference as arguments


#include <iostream>


void swap(int &a, int &b)// passing a and b as reference arguments
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}


int main()
{
	int a, b;

	std::cin >> a >> b;

	std::cout << "\nBefore a and b = " << a << "  " << b;
	swap(a, b);
	std::cout << "\nAfter a and b = " << a << "  " << b<<std::endl;
	
	system("pause");
	return 0;
}