/*

Implicit (Automatic) Type Conversion
When you assign a value of a fundamental (built-in) type to a variable of another fundamental type,
C++ automatically converts the value to the receiving type, if the two types are compatible. For examples,
If you assign an int value to a double variable, the compiler automatically casts the int value to a double 
double (e.g., from 1 to 1.0) and assigns it to the double variable. If you assign a double value of to an int 
variable, the compiler automatically casts the double value to an int value (e.g., from 1.2 to 1) and assigns 
it to the int variable. The fractional part would be truncated and lost. Some compilers issue a warning/error 
"possible loss in precision"; others do not.



Explicit Type-Casting
You can explicitly perform type-casting via the so-called unary type-casting operator in the form of (new-type)
operand or new-type(operand). The type-casting operator takes one operand in the particular type, and returns an
equivalent value in the new type. Take note that it is an operation that yields a resultant value, similar to an 
addition operation although addition involves two operands. For example,


Operator static-cast<type>
C++ introduces a new operator called static_cast<type> to perform type conversion (because the regular cast 
mentioned earlier is too lax and could produce expected results). static_cast signal an error if conversion fails.



*/



/*
* Converting between Celsius and Fahrenheit
*   Celsius = (5/9)(Fahrenheit–32)
*   Fahrenheit = (9/5)Celsius+32
*/
#include <iostream>
#include <iomanip>   // needed for formatting floating-point numbers
using namespace std;

int main() {
	double celsius, fahrenheit;

	// Format floating-points in fixed with 2 decimal places
	cout << fixed << setprecision(2);

	cout << "Enter the temperature in celsius: ";
	cin >> celsius;

	fahrenheit = celsius * 9 / 5 + 32;

	// 9/5*celsius + 32 gives wrong answer! Why?
	cout << celsius << "C is " << fahrenheit << "F" << endl;

	cout << "Enter the temperature in fahrenheit: ";
	cin >> fahrenheit;

	celsius = (fahrenheit - 32) * 5 / 9;

	// 5/9*(fahrenheit - 32) gives wrong answer! Why?
	cout << fahrenheit << "F is " << celsius << "C" << endl;



	// Print floating-point number in fixed format with 1 decimal place
	cout << fixed << setprecision(1);

	// Test explicit type casting
	int i1 = 4, i2 = 8;
	cout << i1 / i2 << endl;           // 0
	cout << (double)i1 / i2 << endl;   // 0.5
	cout << i1 / (double)i2 << endl;   // 0.5
	cout << (double)(i1 / i2) << endl; // 0.0

	double d1 = 5.5, d2 = 6.6;
	cout << (int)d1 / i2 << endl;      // 0
	cout << (int)(d1 / i2) << endl;    // 0

	// Test implict type casting
	d1 = i1;             // int implicitly casts to double
	cout << d1 << endl;  // 4.0
	i2 = d2;             // double truncates to int! (Warning?)
	cout << i2 << endl;  // 6


	/* EXPLICIT CAST*/

	// Print floating-point number in fixed format with 1 decimal point (need <iomanip>)
	cout << fixed << setprecision(1);

	cout << (double)5 << endl;  // int 5 → double 5.0
	cout << (int)5.5 << endl;   // double 5.5 → int 5

	double aDouble = 5.6;
	int anInt = (int)aDouble; // return 5 and assign to anInt. aDouble does not change!

	// C++ also supports function-style type cast.
	cout << double(5) << endl;     // 5.0
	cout << int(5.5) << endl;      // 5
	cout << int(aDouble) << endl;  // 5


	/* STATIC TYPE_CAST */

	double d = 5.5;
	int i = static_cast<int>(d);
	float f = static_cast<float>(i);
	long l = static_cast<long>(d);


	system("pause");
	return 0;
}