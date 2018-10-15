#include <iostream>

using namespace std;

	const int PENNIES = 1;
	const int NICKELS = 5;
	const int DIMES = 10;
	const int QUARTERS = 25;

int main()
{

 int amountCents;
 int amountLeft;
 int numQuarters;
 int numDimes;
 int numNickels;
 int numPennies;

 cout << "enter number of cents: ";
 cin >> amountCents;
 numQuarters = amountCents / QUARTERS; 
 amountLeft = amountCents % QUARTERS;
 numDimes = amountLeft / DIMES;
 amountLeft = amountLeft % DIMES;
 numNickels = amountLeft / NICKELS;
 amountLeft = amountLeft % NICKELS;
 numPennies = amountLeft / PENNIES;

 cout << "pennies: " << numPennies << endl;
 cout << "nickels: " << numNickels << endl;
 cout << "dimes: " << numDimes << endl;
 cout << "quarters: " << numQuarters << endl;


return 0;

}