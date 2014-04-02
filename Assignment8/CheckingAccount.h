#include "Account.h"
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