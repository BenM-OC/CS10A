#include <iostream>
#include <iomanip> 
#include <cstdlib>

void getProbsPerSet(int &numProbsPerSet);
void doOneSet(char operationSymbol, int numProbsPerSet);
void printHeader(int setIterationCounter);
void getMaxNum(int &maxOperandNum);
void doOneProblem(char operationSymbol, int maxOperandNum);
void generateOperands(int &firstNum, int &secondNum, int maxOperandNum);
void calculateCorrectAnswer(int firstNum, int secondNum, int &correctAnswer, char operationSymbol);
void checkAnswer(int correctAnswer);
void printReport();



using namespace std;

int main()
{
	int numProbsPerSet;

	srand(static_cast<unsigned>(time(0))); 

	getProbsPerSet(numProbsPerSet);  
	doOneSet('x', numProbsPerSet); // no more than three args
	doOneSet('-', numProbsPerSet); // no more than three args
	doOneSet('*', numProbsPerSet); // no more than three args
	printReport();
}






void getProbsPerSet(int &numProbsPerSet) 
{
	cout << "Enter the number of problems you would like in each set: ";
	cin >> numProbsPerSet;
}





void doOneSet(char operationSymbol, int numProbsPerSet)
{

    int firstNum, secondNum, correctAnswer, maxOperandNum;

    for(int setIterationCounter = 0; setIterationCounter < 3; setIterationCounter++){
        for(int problemIterationCounter = 0; problemIterationCounter < numProbsPerSet; problemIterationCounter++){
                printHeader(setIterationCounter);
		getMaxNum(maxOperandNum);
		doOneProblem(operationSymbol, maxOperandNum);
	}
    }
}





void printHeader(int setIterationCounter)
{
	for (setIterationCounter = 1; setIterationCounter < 4; setIterationCounter++){
		cout << "Set #" << setIterationCounter << endl;
		cout << "----------" << endl;
	}
}





vfoid getMaxNum(int &maxOperandNum)
{
	cout << "What is the maximum operand number for this set?: " ;
	cin >> maxOperandNum;
}





void doOneProblem(char operationSymbol, int maxOperandNum)
{
	int firstNum, secondNum, correctAnswer;

	generateOperands(firstNum, secondNum, maxOperandNum);
	calculateCorrectAnswer(firstNum, secondNum, correctAnswer, operationSymbol);
	checkAnswer(correctAnswer);
}





void generateOperands(int &firstNum, int &secondNum, int maxOperandNum)
{
	int randNum;

	randNum = rand() % maxOperandNum;
    firstNum = randNum;
    randNum = rand() % maxOperandNum;
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






void printReport()
{
        int amtAnswersCorrect;
        int amtQuestionsAsked;

	cout << "Set #" << setIterationCounter << ":" << " You got " << amtAnswersCorrect << " correct out of " << amtQuestionsAsked << " for " << fixed << setprecision(1) << amtAnswersCorrect / amtQuestionsAsked << endl;


}
