#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "Account.h"

class SavingsAccount : public Account
{

public:
	SavingsAccount(int, float);
	~SavingsAccount();
	void changeInterestRate(float);
	void addInterest();

private:
	float interestRate;
};

#endif