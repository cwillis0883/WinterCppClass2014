#include "TestHarness.h"
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include <iostream>
#include <iomanip>
using namespace std;

//  New Account Test Case
TEST(NewAccountSetup, Account)
{
	cout << "Entering New Account Setup Test Case..." << endl;

	Account account(000000001);
	cout << "Account created successfully." << endl;
	cout << "Account Balance: " << account.getBalance() << endl;


	CHECK_EQUAL(0.00, account.getBalance());
	cout << endl;
}

// Deposit Into Account Test Case
TEST(Deposit, Account)
{
	cout << "Entering Deposit Test Case..." << endl;

	Account account(000000001);
	cout << "Account created successfully." << endl;
	account.deposit(100.00);
	cout << "Account Balance: " << account.getBalance() << endl;
	CHECK_EQUAL(100.00, account.getBalance());
	cout << endl;
}

// Withdraw From Account Test Case
TEST(Withdrawal, Account)
{
	cout << "Entering Withdrawal Test Case..." << endl;

	Account account(000000001);
	cout << "Account created successfully." << endl;
	account.deposit(100.00);
	cout << "Account Balance: " << account.getBalance() << endl;
	account.withdraw(50.00);
	cout << "A withdrawal of $50.00 has been completed." << endl;
	cout << "Account Balance: " << account.getBalance() << endl;
	CHECK_EQUAL(50.00, account.getBalance());
	cout << endl;
}

// Transfer Money From/To Account Test Case
TEST(Transfer, Account)
{
	cout << "Entering Transfer Test Case..." << endl;

	Account oldAccount(000000001);
	Account newAccount(000000002);
	cout << "Accounts created successfully." << endl;
	oldAccount.deposit(100.00);
	cout << " Old Account Balance: " << oldAccount.getBalance() << endl;
	oldAccount.transfer(25.00, newAccount);
	cout << "A transfer of $25.00 has been completed." << endl;
	cout << "Old Account Balance: " << oldAccount.getBalance() << endl;
	cout << "New Account Balance: " << newAccount.getBalance() << endl;
	CHECK_EQUAL(25.00, newAccount.getBalance());
	cout << endl;
}

// Cash Check Test Case
TEST(CashCheck, Account)
{
	cout << "Entering Cash Check Test Case..." << endl;

	CheckingAccount account(0000000001);
	cout << "Checking account created successfully." << endl;
	account.deposit(100.00);
	cout << "Account Balance: " << account.getBalance() << endl;
	cout << "Cashing check number 0001 for $25.00" << endl;
	account.cashCheck(25.00, 0001);
	cout << "Check number 0001 has been cashed for $25.00." << endl;
	cout << "Account Balance: " << account.getBalance() << endl;
	CHECK_EQUAL(75.00, account.getBalance());
	cout << endl;
}

// Calculate Interest Test Case
// Not sure why this one is failing
TEST(InterestDeposit, Account)
{
	cout << "Entering Interest Deposit Test Case..." << endl;

	SavingsAccount account(000000001,.001);
	cout << "Savings account created successfully." << endl;
	account.deposit(100.00);
	account.addInterest();
	cout << "Account Balance: " << account.getBalance() << endl;
	CHECK_EQUAL(100.10, account.getBalance());
	cout << endl;
}