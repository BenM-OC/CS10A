#include <iostream>
#include <iomanip> 
#include <cstdlib>
using namespace std; 

void doOneSet(char operationSymbol, int probsPerSet, int &amountCorrect);
void doOneProblem(char operationSymbol, int maxOperandNumber, char &wasCorrect);
void generateOperands(int &firstNum, int &secondNum, int maxOperandNumber);
void calculateCorrectAnswer(int firstNum, int secondNum, int &correctAnswer, char operationSymbol);
void checkAnswer(int correctAnswer, char &wasCorrect);
void getProbsPerSet(int &probsPerSet);
void printHeader(char operationSymbol);
void getMaxNum(int &maxOperandNumber);
void  printReport(double probsPerSet, double amountCorrectSetOne, double amountCorrectSetTwo, double amountCorrectSetThree);

//The purpose of this program is to provide the user with sets of addition, subtraction, and multiplication problems. The amount of problems in each set is provided by the user, and the maximum number for random generation is provided by the user. The program tracks the amount of problems the user got right in each set and provides a per set report and a total report in values and percentages after the user has completed their work.


//The main function executes the function doOneSet three times with the operator parameter specified each time the funciton is called
int main()
{
    int probsPerSet, amountCorrectSetOne, amountCorrectSetTwo, amountCorrectSetThree;

    srand(static_cast<unsigned>(time(0)));
    getProbsPerSet(probsPerSet);
    doOneSet('+', probsPerSet, amountCorrectSetOne);
    doOneSet('-', probsPerSet, amountCorrectSetTwo);
    doOneSet('*', probsPerSet, amountCorrectSetThree);
    printReport(probsPerSet, amountCorrectSetOne, amountCorrectSetTwo, amountCorrectSetThree);
}

//The getProbsPerSet function prompts the user for the maximum number of problems they would like to be given in each set, and stores that value for the doOneProblem loop further down the program.
void getProbsPerSet(int &probsPerSet)
{
    cout << "Enter the number of problems you would like in each set: ";
    cin >> probsPerSet;
}

//The doOneSet function executes the doOneProblem function as many times as you set the loop to run. 
void doOneSet(char operationSymbol, int probsPerSet, int &amountCorrect)
{
    int maxOperandNumber;
    char wasCorrect;
    amountCorrect = 0;

    printHeader(operationSymbol);
    getMaxNum(maxOperandNumber);

    for(int numProblemsExecuted = 0; numProblemsExecuted < probsPerSet; numProblemsExecuted++){
            doOneProblem(operationSymbol, maxOperandNumber, wasCorrect);

            if(wasCorrect == 'y'){
                amountCorrect += 1;
            }
    }

        cout << endl;
}

//The printHeader function prints a header for each set of problems based on the operation symbol passed in func main()
void printHeader(char operationSymbol)
{
    if(operationSymbol == '+'){
        cout << "Set #1" << endl;
    } else  if(operationSymbol == '-'){
        cout << "Set #2" << endl;
    } else  if(operationSymbol == '*'){
        cout << "Set #3" << endl;
    }
    cout << "------" << endl;
}

//The getMaxNum function prompts the user for the maximum operand number he/she would like to be provided with when the program generates random numbers
void getMaxNum(int &maxOperandNumber)
{
    cout << "What is the maximum number for this set?" << endl;
    cin >> maxOperandNumber;
}

//The doOneProlem calls on seperate functions to generate two random numbers, calculate the correct solution to the equation, and tell the user wether or not they are correct in their answering
void doOneProblem(char operationSymbol, int maxOperandNumber, char &wasCorrect)
{
        int firstNum, secondNum, correctAnswer;

        generateOperands(firstNum, secondNum, maxOperandNumber);
	calculateCorrectAnswer(firstNum, secondNum, correctAnswer, operationSymbol);
        checkAnswer(correctAnswer, wasCorrect);



}

//generateOperands generates a random number between 0 and 100, assigns it to firstNum, generates a new random number between 1 and 100 and assigns it to secondNum
void generateOperands(int &firstNum, int &secondNum, int maxOperandNumber)
{
	int randNum;

        randNum = rand() % maxOperandNumber ;
	firstNum = randNum;
        randNum = rand() % maxOperandNumber;
	secondNum = randNum;
}

//The calculateCorrectAnswer function takes the firstNum and secondNum value and operates on them based on the value of the operationSymbol
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

//The checkAnswer function checks for user input and  prints "correct" if the value of the user input evaluates to be equal to the correct answer calculated in the calculateCorrectAnswer function. If it does not match the value of correctAnswer the word "incorrect" is printed to the terminal.
void checkAnswer(int correctAnswer, char &wasCorrect)
{
        int usersAnswer;
        cin >> usersAnswer;

        if (usersAnswer == correctAnswer) {
                wasCorrect = 'y';
                cout << "Correct!";
        } else {
                wasCorrect = 'n';
                cout << "Incorrect.";
        }

    cout << endl;
}

//The printReport function reports the amount he/she got correct out of each set and total, and the corresponding percentage value for each set and total.
void printReport(double probsPerSet, double amountCorrectSetOne, double amountCorrectSetTwo, double amountCorrectSetThree)
{
    double totalProblems = probsPerSet * 3;
    double totalCorrect = amountCorrectSetOne + amountCorrectSetTwo + amountCorrectSetThree;

    double percentCorrectSetOne, percentCorrectSetTwo, percentCorrectSetThree, totalPercentCorrect;

    percentCorrectSetOne = amountCorrectSetOne * 100 / probsPerSet;
    percentCorrectSetTwo = amountCorrectSetTwo * 100 / probsPerSet;
    percentCorrectSetThree = amountCorrectSetThree * 100 / probsPerSet;
    totalPercentCorrect = totalCorrect * 100 / totalProblems;

    cout << "Set #1: You got " << amountCorrectSetOne << " correct out of " << probsPerSet << " for ";
    cout << fixed << setprecision(1) << percentCorrectSetOne << "%" << endl;
    cout << fixed << setprecision(0) << "Set #2: You got " << amountCorrectSetTwo << " correct out of " << probsPerSet << " for ";
    cout << fixed << setprecision(1) << percentCorrectSetTwo << "%" << endl;
    cout << fixed << setprecision(0) << "Set #3: You got " << amountCorrectSetThree << " correct out of " << probsPerSet << " for ";
    cout << fixed << setprecision(1) << percentCorrectSetThree << "%" << endl;
    cout << fixed << setprecision(0) << "Overall you got " << totalCorrect << " out of " << totalProblems << " for " ;
    cout << fixed << setprecision(1) << totalPercentCorrect << "%" << endl;

}


/* OUTPUT
 *
 * benji@ryzenbox:~/git/CS10A/Week 12$ ./randMath.out
Enter the number of problems you would like in each set: 3
Set #1
------
What is the maximum number for this set?
5
3 + 2 = 5
Correct!
1 + 3 = 4
Correct!
1 + 0 = 100
Incorrect.

Set #2
------
What is the maximum number for this set?
5
1 - 3 = -2
Correct!
4 - 1 = 100
Incorrect.
2 - 3 = -1
Correct!

Set #3
------
What is the maximum number for this set?
5
1 * 0 = 0
Correct!
3 * 4 = 100
Incorrect.
4 * 0 = 100
Incorrect.

Set #1: You got 2 correct out of 3 for 66.7%
Set #2: You got 2 correct out of 3 for 66.7%
Set #3: You got 1 correct out of 3 for 33.3%
Overall you got 5 out of 9 for 55.6%
benji@ryzenbox:~/git/CS10A/Week 12$
*/
