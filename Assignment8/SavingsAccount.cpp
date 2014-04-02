#include "SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount(int accountNumber, float interestRate)
:Account(accountNumber),
interestRate(interestRate)
{

}

SavingsAccount::~SavingsAccount()
{

}

void SavingsAccount::changeInterestRate(float newInterestRate)
{
	interestRate = newInterestRate;
}

void SavingsAccount::addInterest()
{
	balance += balance*interestRate;
}