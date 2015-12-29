//A simple basic class explaining the classes and objects concept in c++
//Class represents a bank account
#pragma once


#include <iostream>
#include <string>


class BankAccount
{
public:
	//Constructor to initilize the variables to default values
	BankAccount(std::string AccountHolderName, std::string type = "SB");

	//Destructor to destroy the class object
	~BankAccount();

	//Deposit amount, returns the new balance amount
	float deposit(float amount);

	//Withdraw amount, returns the new balance amount
	float withdraw(float amount);

	float getBalance()const {
		return balance;
	}

	void displayDetails()const {
		std::cout << "\nAccount Holder Name : " << cName;
		std::cout << "\nAccount Type : " << accountType;
		std::cout << "\nAccount No : " << accountNo;
		std::cout << "\nBalance Brought Forward = " << balance<<std::endl;
	}

private:
	std::string cName;
	static int accountNo;
	std::string accountType;
	float balance;
};

