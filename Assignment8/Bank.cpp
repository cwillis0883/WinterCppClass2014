#include "TestHarness.h"
#include "Account.h"
#include <iostream>
#include <iomanip>
using namespace std;

TEST(NewAccountSetup, Account)
{
	cout << "Entering New Account Setup Test Case..." << endl;

	Account account1(000000001);
	cout << "Account created successfully." << endl;
	cout << "Account 1 Balance: " << account1.getBalance() << endl;


	CHECK_EQUAL(0.00, account1.getBalance());
	cout << endl;
}

TEST(Deposit, Account)
{
	cout << "Entering Deposit Test Case..." << endl;

	Account account1(000000001);
	cout << "Account created successfully." << endl;
	account1.deposit(100.00);
	cout << "Account 1 Balance: " << account1.getBalance() << endl;
	CHECK_EQUAL(100.00, account1.getBalance());
	cout << endl;
}