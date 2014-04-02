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