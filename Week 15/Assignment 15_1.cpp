#include <iostream> 
using namespace std;


const int ARRAY_SIZE = 1000;


void getArrayValues(int userArray[], int &numValuesInArray);
void sortArrayValues(int userArray[], int numValuesInArray);
void printSortedUserArray(const int userArray[], int numValuesInArray);
int indexOfSmallest(userArray, count, numValuesInArray), userArray[count]);
bool isInArray(int userEnteredNumber, int userArray[]);









int main() 
{
	int userArray[ARRAY_SIZE];
	int numValuesInArray;

	getArrayValues(userArray, numValuesInArray);
	sortArrayValues(userArray, numValuesInArray);
	cout << "The sorted list is as follows: " << endl;
	printSortedUserArray(userArray, numValuesInArray);
}



void getArrayValues(int userArray[], int &numValuesInArray)
{
	int userEnteredNumber;
	int enteredNumCount = 0;

	cout << "Enter a number (negative number to quit): " ;
	cin >> userEnteredNumber;

	while (userEnteredNumber >=0 && enteredNumCount < ARRAY_SIZE) {
		if (!isInArray(userEnteredNumber, userArray)) {

			userArray[enteredNumCount] = userEnteredNumber;
			enteredNumCount++;

			if (enteredNumCount < ARRAY_SIZE){
				cout << "Enter a number (negative number to quit): " ;
				cin >> userEnteredNumber;
			} else {
				cout << "The array is now full." << endl;
			}

		} else {
			if (enteredNumCount < ARRAY_SIZE){
				cout << "Enter a number (negative number to quit): " ;
				cin >> userEnteredNumber;
			} else {
				cout << "The array is now full." << endl;
			}
		}
	}
	numValuesInArray = enteredNumCount;
}



void sortArrayValues(int userArray[], int numValuesInArray)
{
	for (int count = 0; count < numValuesInArray - 1; count++) {
		swap(userArray[indexOfSmallest(userArray, count, numValuesInArray)], userArray[count]);
	}

}





void indexOfSmallest(const int userArray[], int startingIndex, int numValuesInArray) {

	int targetIndex = startingIndex;

	for (int count = startingIndex + 1; count < numValuesInArray; count ++) {
		if(userArray[count] < userArray[targetIndex]) {
			targetIndex = count;
		}
	}

	return targetIndex
}


void printSortedUserArray(const int userArray[], int numValuesInArray) {
	for (int count = 0; count < numValuesInArray; count++) {
		count << userArray[count] << " ";
	}
}




bool isInArray(int userEnteredNumber, int userArray[]) 
{
	for(int i = 0; i < ARRAY_SIZE; i++) {
		if (array[i] == userEnteredNumber) {
			return true;
		} else {
			return false;
		}
	}
}