#include <iostream>
using namespace std;

/* The purpose of this program is to take the amount of years the user has spent in an educational system and report back to the user what kind of schooling facility they are in */


int main() {
	int yearsOfSchool;

	cout << "Enter years of school: ";
	cin >> yearsOfSchool;

	if (yearsOfSchool < 0) {
		cout << "Years of school must be a non-negative integer" << endl;
		main();
	} else if (yearsOfSchool == 0) { 
		cout << "No schooling" << endl;
	} else if ((yearsOfSchool >= 1) && (yearsOfSchool < 6)) {
		cout << "Elementary School" << endl;
	} else if ((yearsOfSchool >=7) && (yearsOfSchool <= 8)) {
		cout << "Middle School" << endl;
	} else if ((yearsOfSchool >= 9) && (yearsOfSchool <= 12)) {
		cout << "High School" << endl;
	} else if (yearsOfSchool > 12) {
		cout << "College" << endl;
	}

	return 0;
}


/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	OUTPUT

	[benji@Ryzenbox Week Four]$ ./schooling.out
	Enter years of school: -5
	Years of school must be a non-negative integer
	Enter years of school: 1
	Elementary School

	[benji@Ryzenbox Week Four]$ ./schooling.out
	Enter years of school: 7
	Middle School

	[benji@Ryzenbox Week Four]$ ./schooling.out
	Enter years of school: 10
	High School

	[benji@Ryzenbox Week Four]$ ./schooling.out
	Enter years of school: 15
	College

	[benji@Ryzenbox Week Four]$ 

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

