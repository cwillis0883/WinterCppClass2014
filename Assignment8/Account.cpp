#include "Account.h"
#include <iostream>
using namespace std;

Account::Account(int accountNumber)
:balance(0),
accountNumber(accountNumber)
{

}

Account::~Account()
{

}

bool Account::deposit(float amount)
{
	balance += amount;
	return true;
}

bool Account::withdraw(float amount)
{
	if (balance - amount > 0)
	{
		balance -= amount;
		return true;
	}
	else
	{
		cout << "Insufficient funds for withdrawal." << accountNumber << endl;
		return false;
	}
}

bool Account::transfer(float amount, Account& account)
{
	if (withdraw(amount))
	{
		if (account.deposit(amount))
		{
			return true;
		}
	}
	else
	{
		return false;
	}
}

float Account::getBalance()
{
	return balance;
}