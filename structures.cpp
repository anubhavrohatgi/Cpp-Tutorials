/*
	C++ structs, like classes, may contain access specifiers (public, private, protected), member functions, constructor,
	destructor and support inheritance. The only difference for C++'s structs and classes is the struct's members default 
	to public access while class members default to private access, if no access specifier is used. Also, C++ structs default
	to public-inheritance whereas classes default to private-inheritance.

*/



#include <iostream>
using namespace std;

struct Point {
	int x, y;
};

struct Rectangle {
	Point topLeft;
	Point bottomRight;

	Rectangle() {
		//Calling constructor to initialize the elements to default values
		topLeft.x = 0;
		topLeft.y = 0;

		bottomRight.x = 10;
		bottomRight.y = 10;
	}

	int rectArea() {
		return abs( (bottomRight.x - topLeft.x) * (bottomRight.y - topLeft.y) );
	}
};

int main() {
	Point p1, p2;
	p1.x = 0;  // p1 at (0, 3)
	p1.y = 3;
	p2.x = 4;  // p2 at (4, 0)
	p2.y = 0;

	cout << "p1 at (" << p1.x << "," << p1.y << ")" << endl;
	cout << "p2 at (" << p2.x << "," << p2.y << ")" << endl;

	Rectangle rect;

	cout << "Default rect at topLeft (" << rect.topLeft.x << "," << rect.topLeft.y << ")" << endl;
	cout << "Default rect at bottomRight (" << rect.bottomRight.x << "," << rect.bottomRight.y << ")" << endl;
	cout << "Default area = " << rect.rectArea()<<endl;

	rect.topLeft = p1;
	rect.bottomRight = p2;

	cout << "Rectangle top-left at (" << rect.topLeft.x
		<< "," << rect.topLeft.y << ")" << endl;
	cout << "Rectangle bottom-right at (" << rect.bottomRight.x
		<< "," << rect.bottomRight.y << ")" << endl;
	cout << "New area = " << rect.rectArea() << endl;

	system("pause");

	return 0;
}