#include <iostream>
#include <iomanip>
using namespace std; 

/* The purpose of this program is to take and store user input regarding theater attendees' age, their favorite food, and give averages and other useful informaiton after user has input all data */

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
	int amt41To60 = 0;
	int amtOver60 = 0;
	int ageOfYoungest = 0;
	int ageOfOldest = 0;
	int amtPrefSoda = 0;
	int amtPrefPopcorn = 0;
	int amtPrefBoth = 0;

	char foodPreference = 0;

	double ageLoopCounter = 0;
	double totalOfAges = 0;
	double averageAge = 0;

	cout << "The purpose of this program is to take in the age of attendee's and report back to the user how many attendee's fall into the specified age groups." << endl;
	cout << "Enter the age of an attendee (negative number to quit): ";
	cin >> age;
	ageOfYoungest = age;

	while (age >= 0) {

		//Asking for and keeping track of each attendee's food preferences
		cout << "Enter the food preference of the attendee ('p' for popcorn 's' for soda 'b' for both): " << endl;
		cin >> foodPreference;

		if (foodPreference == 'p') {
			amtPrefPopcorn++;
		} else if (foodPreference == 's') {
			amtPrefSoda++;
		} else if (foodPreference == 'b') {
			amtPrefBoth++;
		} else {
			cout << "This attendee has no preference." << endl;
		}

		//Keeping track of the sum of all entered ages and keeping track of how many times the loop has been run
		totalOfAges += age;
		ageLoopCounter++;

		//Determining who is the youngest and oldest 
		if (age > ageOfOldest) {
			ageOfOldest = age;
		}
		if (age < ageOfYoungest) {
			ageOfYoungest = age;
		}

		//Keeping track of how many people fall under each age catagory
		if (age <= EIGHTTEEN_YEARS_OLD) {
			amtUnder19++;
		} else if ((age > EIGHTTEEN_YEARS_OLD) && (age <= THIRTY_YEARS_OLD)) {
			amt19To30++;
		} else if ((age > THIRTY_YEARS_OLD) && (age <= FOURTY_YEARS_OLD)) {
			amt31To40++;
		} else if ((age > FOURTY_YEARS_OLD) && (age <= SIXTY_YEARS_OLD)) {
			amt41To60++;
		} else if (age > SIXTY_YEARS_OLD) {
			amtOver60++;
		}



		cout << "Enter the age of an attendee (negative number to quit): ";
		cin >> age;
	}

	cout << "Age 0 to 18: " << amtUnder19 << endl;
	cout << "Age 19 to 30: " << amt19To30 << endl;
	cout << "Age 31 to 40: " << amt31To40 << endl;
	cout << "Age 41 to 60: " << amt41To60 << endl;
	cout << "Over 60: " << amtOver60 << endl;

	cout << "Amount of people who prefer popcorn: " << amtPrefPopcorn << endl;
	cout << "Amount of people who prefer soda: " << amtPrefSoda << endl;
	cout << "Amount of people who prefer both: " << amtPrefBoth << endl;

	//Calculating the average age of attendees
	averageAge = totalOfAges / ageLoopCounter;
	cout << setprecision(1) << fixed << "The Average Age is: " << averageAge << endl;

	cout << "The Youngest Person was: " << ageOfYoungest << endl;
	cout << "The Oldest perosn was: " << ageOfOldest << endl;

return 0;
}


/* Output

[benji@thinktop Week 7]$ ./ageEval.out
The purpose of this program is to take in the age of attendee's and report back to the user how many attendee's fall into the specified age groups.
Enter the age of an attendee (negative number to quit): 34
Enter the food preference of the attendee ('p' for popcorn 's' for soda 'b' for both): 
s
Enter the age of an attendee (negative number to quit): 16
Enter the food preference of the attendee ('p' for popcorn 's' for soda 'b' for both): 
b
Enter the age of an attendee (negative number to quit): 68
Enter the food preference of the attendee ('p' for popcorn 's' for soda 'b' for both): 
b
Enter the age of an attendee (negative number to quit): 53
Enter the food preference of the attendee ('p' for popcorn 's' for soda 'b' for both): 
s
Enter the age of an attendee (negative number to quit): 39
Enter the food preference of the attendee ('p' for popcorn 's' for soda 'b' for both): 
p
Enter the age of an attendee (negative number to quit): 23
Enter the food preference of the attendee ('p' for popcorn 's' for soda 'b' for both): 
s
Enter the age of an attendee (negative number to quit): 21
Enter the food preference of the attendee ('p' for popcorn 's' for soda 'b' for both): 
s
Enter the age of an attendee (negative number to quit): -1
Age 0 to 18: 1
Age 19 to 30: 2
Age 31 to 40: 2
Age 41 to 60: 1
Over 60: 1
Amount of people who prefer popcorn: 1
Amount of people who prefer soda: 4
Amount of people who prefer both: 2
The Average Age is: 36.3
The Youngest Person was: 16
The Oldest perosn was: 68
[benji@thinktop Week 7]$ 

*/