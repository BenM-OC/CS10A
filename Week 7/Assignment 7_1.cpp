#include <iostream>
using namespace std; 

const int EIGHTTEEN_YEARS_OLD = 18;
const int THIRTY_YEARS_OLD = 30;
const int FOURTY_YEARS_OLD = 40;
const int SIXTY_YEARS_OLD = 60;


int main()
{
	int age;
	int amtUnder19 = 0;
	int amt19To30 = 0;
	int amt31To40 = 0; 
	int amt41to60 = 0;
	int amtOver60 = 0;

	cout << "The purpose of this program is to take in the age of attendee's and report back to the user how many attendee's fall into the specified age groups." << endl;
	cout << "Enter the age of an attendee (negative number to quit): ";
	cin >> age;

	while (age >= 0) {
		if (age <= EIGHTTEEN_YEARS_OLD) {
			amtUnder19++;
		} else if ((age > EIGHTTEEN_YEARS_OLD) && (age <= THIRTY_YEARS_OLD)) {
			amt19To30++;
		} else if ((age > THIRTY_YEARS_OLD) && (age <= FOURTY_YEARS_OLD)) {
			amt31To40++;
		} else if ((age > FOURTY_YEARS_OLD) && (age <= SIXTY_YEARS_OLD)) {
			amt41to60++;
		} else if (age > SIXTY_YEARS_OLD) {
			amtOver60++;
		}

		cout << "Enter the age of an attendee (negative number to quit): ";
		cin >> age;
	}

	cout << "Age 0 to 18: " << amtUnder19 << endl;
	cout << "Age 19 to 30: " << amt19To30 << endl;
	cout << "Age 31 to 40: " << amt31To40 << endl;
	cout << "Age 41 to 60: " << amt41to60 << endl;
	cout << "Over 60: " << amtOver60 << endl;

	cout << "Goodbye!" << endl;
	
return 0;
}


/* DESIRED OUTCOME

	Enter age of attendee (negative number to quit): 34    
    Enter age of attendee (negative number to quit): 16
    Enter age of attendee (negative number to quit): 68
    Enter age of attendee (negative number to quit): 53
    Enter age of attendee (negative number to quit): 39
    Enter age of attendee (negative number to quit): 23
    Enter age of attendee (negative number to quit): 21
    Enter age of attendee (negative number to quit): -1

    age 0  to 18: 1
    age 19 to 30: 2
    age 31 to 40: 2
    age 41 to 60: 1
    over 60: 1
*/