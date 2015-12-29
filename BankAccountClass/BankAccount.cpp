#include "BankAccount.h"

int BankAccount::accountNo = 0;

BankAccount::BankAccount(std::string AccountHolderName,std::string type)
{
	cName = AccountHolderName;
	balance = 0.0f;
	accountType = type;
	accountNo++;
}


BankAccount::~BankAccount()
{

}


float BankAccount::deposit(float amount)
{
	balance += amount;
	return balance;
}


float BankAccount::withdraw(float amount)
{
	if (balance == 0 || amount >= balance)
		std::cout << "\n[WARNING] Cannot withdraw amount more than the remaining balance.\n";
	else
		balance -= amount;

	return balance;
}