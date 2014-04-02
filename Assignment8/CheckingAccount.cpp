#include "CheckingAccount.h"
using namespace std;

CheckingAccount::CheckingAccount(int accountNumber)
:Account(accountNumber),
checksCashed(0)
{

}

CheckingAccount::~CheckingAccount()
{

}

bool CheckingAccount::cashCheck(float amount, int checkNumber)
{
	if (withdraw(amount))
	{
		for (int i = 0; i < checksCashed.size(); i++)
		{
			if (checkNumber == checksCashed[i])
			{
				deposit(amount);
				return false;
			}
		}
		checksCashed.push_back(checkNumber);
		return true;
	}
	else
	{
		return false;
	}
}