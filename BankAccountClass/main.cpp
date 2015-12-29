#include <iostream>
#include "BankAccount.h"



int main()
{
	BankAccount cand1("Anubhav");

	cand1.displayDetails();


	cand1.deposit(2000);

	cand1.displayDetails();

	BankAccount cand2("Pavan", "CURRENT");

	cand2.displayDetails();

	cand2.deposit(200);

	cand2.displayDetails();

	cand2.withdraw(56);
	cand2.displayDetails();


	system("pause");
	return 0;
}