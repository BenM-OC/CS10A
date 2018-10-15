#include <iostream>
using namespace std; 

/* The purpose of this program is to convert pounds to ounces as many times as the user needs, with a loop that exits upon entering a negative number */

int main()
{
	int pounds;
	int ounces;

	cout << "The purpose of this program is to convert pounds to ounces." << endl;
	cout << "Enter the value in pounds (or enter a negative number to quit): ";
	cin >> pounds;

	while (pounds >= 0) {
		ounces = pounds * 16;
		cout << pounds << " pounds is " << ounces << " ounces." << endl;

		cout << "Enter the value in pounds (or enter a negative number to quit): ";
		cin >> pounds;
	}
	
	cout << "Goodbye!" << endl;

return 0;

}


/* OUTPUT 

[benji@thinktop Week 6]$ ./6_2.out
The purpose of this program is to convert pounds to ounces.
Enter the value in pounds (or enter a negative number to quit): 2
2 pounds is 32 ounces.
Enter the value in pounds (or enter a negative number to quit): -1
Goodbye!
[benji@thinktop Week 6]$

*/