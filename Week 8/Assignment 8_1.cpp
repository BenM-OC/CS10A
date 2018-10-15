#include <iostream>
using namespace std;

const int NUM_TO_BE_EVALD = 7;
const int INITIAL_POSITION_VALUE = 0;

// The purpose of this program is to prompt the user for a set of numbers, evaluate wether or not each entered number is the predetermined number we're looking for, and store the sequential position of the First and Last time that number appears. 

int main()
{
	int outputLoopCounter = 0;
	int amtToDoLoop = 0;
	int enteredNum = 0;
	int firstFoundPosition = 0;
	int lastFoundPosition = 0;

	//User tells the program how many numbers long their sequence of numbers is
	cout << "How many numbers will be entered? ";
	cin >> amtToDoLoop;

	//Program executes this do-while loop as many times as the user has numbers to enter
	do {
		outputLoopCounter++;

		cout << "Enter num: ";
		cin >> enteredNum;

		//if the entered number is the number we're looking for and the sequential value of "firstFoundPosition" is still in its inital state, then the firstFoundPosition is equal to the current loop iteration value
		if ((enteredNum == NUM_TO_BE_EVALD) && (firstFoundPosition == INITIAL_POSITION_VALUE)) {
			firstFoundPosition = outputLoopCounter;
		}

		//if the entered number is the number we're looking for, the "lastFoundPosition" is set equal to the current loop iteration value, this is overwritten if it happens again, so the "lastFoundPosiiton" value is always equal to the loop iteration value that last held the number we're looking for
		if (enteredNum == NUM_TO_BE_EVALD) {
			lastFoundPosition = outputLoopCounter;
		}
	} while (outputLoopCounter < amtToDoLoop);

	
	//If the value of both "lastFoundPosition" and "firstFoundPosition" are equal to their initialization state, print: no entered number matched the number we were looking for, if any number entered is equal to the number we were looking for print the sequential value of the first and last time it appeared. 
	if ((lastFoundPosition == INITIAL_POSITION_VALUE) && (firstFoundPosition == INITIAL_POSITION_VALUE)) {
		cout << "Sorry, there were no " << NUM_TO_BE_EVALD << "'s entered." << endl;
	} else {
		cout << "The first " << NUM_TO_BE_EVALD << " was in position " << firstFoundPosition << endl;
	cout << "The last " << NUM_TO_BE_EVALD << " was in position " << lastFoundPosition << endl;
	}

	return 0;
}

/* OUTPUT 

[benji@thinktop Week 8]$ ./firstLastNum.out                          
How many numbers will be entered? 8
Enter num: 5
Enter num: 7
Enter num: 6
Enter num: 7
Enter num: 7
Enter num: 3
Enter num: 8
Enter num: 6
The first 7 was in position 2
The last 7 was in position 5

[benji@thinktop Week 8]$ ./firstLastNum.out
How many numbers will be entered? 8
Enter num: 5
Enter num: 2
Enter num: 6
Enter num: 7
Enter num: 1
Enter num: 3
Enter num: 8
Enter num: 6
The first 7 was in position 4
The last 7 was in position 4

[benji@thinktop Week 8]$ ./firstLastNum.out
How many numbers will be entered? 8
Enter num: 5
Enter num: 1
Enter num: 6
Enter num: 5
Enter num: 9
Enter num: 3
Enter num: 8
Enter num: 6
Sorry, there were no 7's entered.
[benji@thinktop Week 8]$ 

*/