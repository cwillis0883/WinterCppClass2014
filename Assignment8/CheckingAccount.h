#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "Account.h"
#include <vector>
using namespace std;

class CheckingAccount : public Account
{
public:
	CheckingAccount(int);
	~CheckingAccount();
	bool cashCheck(float amount, int checkNumber);

private:
	vector<int> checksCashed;
};

#endif