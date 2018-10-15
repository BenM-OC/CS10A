#include <iostream>
using namespace std;

// The purpose of this program is to prompt the user for a number, and then provide the user with the sum of all squares between zero and the number they've entered

int main()
{
	int sumOfSquares = 0;
	int calcLoopCounter = 0;
	int userTopNumber;

	//User inputs the max number the program is allowed to square
	cout << "Enter a number greater than 0 (less than 1 to quit): ";
	cin >> userTopNumber;

	//While the value of the max number is greater than 0 this loop is executed
	while (userTopNumber > 0) {

		//Calcualtion values are reset to zero so each run of the following loop is ran like the first
		calcLoopCounter = 0;
		sumOfSquares = 0;

		//While the calcLoopCounter is less than the max number selected by the user, the program adds one to the value of the calcLoopCounter, and uses the value of the (calcLoopCounter^2) plus the existing value of the sumOfSqaures to calculate the New sumOfSquares. 
		while (calcLoopCounter < userTopNumber) {
			calcLoopCounter++;

			sumOfSquares = (calcLoopCounter * calcLoopCounter) + sumOfSquares;
		}

		//Program informs the user of the sum of each number from 1 to their max number sqaured
		cout << "The sum of squares from 1 to " << userTopNumber << " is " << sumOfSquares << endl;

		//Program re-prompts for a max number to rerun the previously executed calculations, exiting the loop and program if the value of the max number is less than one.
		cout << "Enter a number greater than 0 (less than 1 to quit): ";
		cin >> userTopNumber;
	}
	return 0;
}

/* OUTPUT

[benji@thinktop Week 8]$ ./sumOfSquares.out
Enter a number greater than 0 (less than 1 to quit): 4
The sum of squares from 1 to 4 is 30
Enter a number greater than 0 (less than 1 to quit): 1
The sum of squares from 1 to 1 is 1
Enter a number greater than 0 (less than 1 to quit): 0
[benji@thinktop Week 8]$

*/