#include <iostream>
#include <iomanip> 
#include <cstdlib>
using namespace std; 

void doOneSet(char operationSymbol);
void doOneProblem(char operationSymbol);
void generateOperands(int &firstNum, int &secondNum);
void calculateCorrectAnswer(int firstNum, int secondNum, int &correctAnswer, char operationSymbol);
void checkAnswer(int correctAnswer);

//The purpose of this program is to provide the user with a set of five unsolved equations containing random numbers from 1 to 100, an operator as outlined in the assignment description, solve the problem without revealing the answer to the user, take user input on what the answer of the equation is, and report back to the user wether the solution they gave is correct or not. 


//The main function executes the function doOneSet three times with the operator parameter specified each time the funciton is called
int main()
{
    srand(static_cast<unsigned>(time(0)));    
    doOneSet('+');
    doOneSet('-');
    doOneSet('*');

    return 0;
}






//The doOneSet function executes the doOneProblem function as many times as you set the loop to run. 
void doOneSet(char operationSymbol)
{
	for(int i = 0; i < 5; i++){
		doOneProblem(operationSymbol);
	}
}





//The doOneProlem calls on seperate functions to generate two random numbers, calculate the correct solution to the equation, and tell the user wether or not they are correct in their answering
void doOneProblem(char operationSymbol)
{
	int firstNum, secondNum, correctAnswer;

	generateOperands(firstNum, secondNum);
	calculateCorrectAnswer(firstNum, secondNum, correctAnswer, operationSymbol);
	checkAnswer(correctAnswer);
}





//
void generateOperands(int &firstNum, int &secondNum)
{
	int randNum;
	randNum = rand() % 101;
    firstNum = randNum;
    randNum = rand() % 101;
    secondNum = randNum;
}

void calculateCorrectAnswer(int firstNum, int secondNum, int &correctAnswer, char operationSymbol)
{
	switch (operationSymbol){
		case '+' : 
			correctAnswer = firstNum + secondNum;
			cout << firstNum << " + " << secondNum << " = ";
			break;

		case '-' : 
			correctAnswer = firstNum - secondNum;
			cout << firstNum << " - " << secondNum << " = ";
			break;

		case '*' : 
			correctAnswer = firstNum * secondNum;
			cout << firstNum << " * " << secondNum << " = ";
			break;

		case '/' : 
			correctAnswer = firstNum - secondNum;
			cout << firstNum << " / " << secondNum << " = ";
			break;
	}
}

void checkAnswer(int correctAnswer)
{
	int usersAnswer;
	cin >> usersAnswer;

    if(usersAnswer == correctAnswer){
    	cout << "Correct";
    } else {
    	cout << "Incorrect";
    }

    cout << endl;
}

/* OUTPUT
	benji@thinktop:~/git/CS10A/Week 11$ ./randCalc.out
		64 + 39 = 103
		Correct
		73 + 24 = 100
		Incorrect
		22 + 78 = 100
		Correct
		39 + 51 = 0
		Incorrect
		95 + 87 = 182
		Correct
		13 - 31 = -18
		Correct
		93 - 88 = 5
		Correct
		31 - 14 = 17
		Correct
		48 - 98 = 0
		Incorrect
		92 - 39 = 53
		Correct
		10 * 12 = 120
		Correct
		49 * 100 = 4900
		Correct
		43 * 60 = 2580
		Correct
		80 * 0 = 0
		Correct
		15 * 11 = 165
		Correct
	benji@thinktop:~/git/CS10A/Week 11$
*/