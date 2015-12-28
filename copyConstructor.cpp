/*

	The following snippet shows how to use the copy constructor.
	A copy constructor constructs a new object by copying an existing 
	object of the same type. In other words, a copy constructor takes an
	argument, which is an object of the same class.
	If you do not define a copy constructor, the compiler provides 
	a default which copies all the data members of the given object.

	When an object is passed into a function by value, the copy constructor
	will be used to make a clone copy of the argument.

	Pass-by-value for object means calling the copy constructor. To avoid the
	overhead of creating a clone copy, it is usually better to pass-by-reference-to-const,
	which will not have side effect on modifying the caller's object.

	he default copy constructor performs shadow copy. It does not copy the dynamically
	allocated data members created via new or new[] operator.


	Also this snippet will show how to use the namespace by implementing :: resolution 
	operator.


	Can we make copy constructor private?
	Yes, a copy constructor can be made private. When we make a copy constructor private in a 
	class, objects of that class become non-copyable. This is particularly useful when our class
	has pointers or dynamically allocated resources. In such situations, we can either write our 
	own copy constructor like above String example, or make a private copy constructor so that users
	get compiler errors rather than surprises at run time.
*/


#include <iostream>
#include <string>

class Student {

public:

	//Default constructor
	Student(std::string name, int age);

	//Copy constructor
	Student(const Student& sObject);


	void editName_n_Age(std::string newName, int newAge);

	void printDetails();

private:

	std::string name;
	int age;
};


Student::Student(std::string name, int age) {

	this->name = name;
	this->age = age;
}

Student::Student(const Student &object) {

	std::cout << "\nThis is the copy constructor called";
	name = object.name;
	age = object.age;
}


void Student::editName_n_Age(std::string newName, int newAge) {

	this->name = newName;
	this->age = newAge;
}

void Student::printDetails()
{
	std::cout << "\nName = " << name;
	std::cout << "\nAge = " << age;

}

int main()
{
	Student s("Anubhav", 22);
	s.printDetails(); //"Anubhav", 22 

	std::cout << "\n\n\n";

	Student copyCall = s; // Copy Contrcutor is called here
	copyCall.printDetails(); //"Anubhav", 22


	Student copy1("Anu", 29);

	copyCall = copy1;
	
	copyCall.printDetails();//"Anu", 29

	s.printDetails();

	
	s.editName_n_Age("Anubhav R", 29);
	s.printDetails();



	system("pause");
	return 0;
}