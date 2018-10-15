#include <iostream>
using namespace std;

/* The purpose of this program is to convert an amount of pounds to an amount of ounces as many times as the user needs to, using a loop that repeats on user confirmation */


int main()
{
	int pounds;
	int ounces;
	char makeConversionYN;

	cout << "Would you like to make a pounds to ounces conversion? (Y/N): ";
	cin >> makeConversionYN;

	while (makeConversionYN == 'y' || makeConversionYN == 'Y')
	{
		cout << "Enter a value in pounds: ";
		cin >> pounds;
		ounces = pounds * 16;
		cout << pounds << " pounds is " << ounces << " ounces." << endl << endl;
		cout << "Would you like to make a pounds to ounces conversion? (Y/N): ";
		cin >> makeConversionYN;
	}

	cout << "Goodbye!" << endl;

return 0;

}

/* OUTPUT 

[benji@thinktop Week 6]$ ./6_1.out
Would you like to make a pounds to ounces conversion? (Y/N): y
Enter a value in pounds: 2
2 pounds is 32 ounces.

Would you like to make a pounds to ounces conversion? (Y/N): n
Goodbye!
[benji@thinktop Week 6]$

*/