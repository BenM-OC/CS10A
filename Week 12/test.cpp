#include <iostream> 

using namespace std;

int main (){
	int amountCorrect = 0;
	int correctAnswer;
	int usersAnswer;


	for( int i = 0; i < 5; i++) {
		cout << "Enter the answer: " ;
		cin >> correctAnswer;

		cout << "enter your guess: "; 
		cin >> usersAnswer;

		if (usersAnswer == correctAnswer) {
			amountCorrect += 1;
			cout << amountCorrect;
		} else {
			amountCorrect += 0;
		}
	}

	cout << "Amount Correct = " << amountCorrect << endl;
}