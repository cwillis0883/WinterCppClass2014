#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <vector>
using namespace std;

class Account
{
public:
	Account(int);
	~Account();
	bool deposit(float);
	bool withdraw(float);
	bool transfer(float amount, Account& account);
	float getBalance();

protected:
	float balance;

private:
	int accountNumber;
};

#endif