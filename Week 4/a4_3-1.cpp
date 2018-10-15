#include <iostream> 
#include <iomanip>
using namespace std;

/* The purpose of this program is to provide the user with a simple calculator for adding, subtracting, multiplying, or dividing two numbers */

int main() { 
	double firstNumber, secondNumber, calcResult;
	char calcSymbol;

	// Program prompts for and recieves the two numbers being operated on and the operation type

	cout << "This program is a simple calculator for adding, subtracting, multiplying, or dividing two numbers" << endl;
	cout << "Enter the first number: ";
	cin >> firstNumber;
	cout << "Enter the symbol for your math operation ( '+', '-', 'x', or '/' ): ";
	cin >> calcSymbol;
	cout << "Enter the second number: ";
	cin >> secondNumber;

	// Program performs basic arithmatic on firstNumber and SecondNumber based on the value of calcSymbol
	
	switch (calcSymbol) {
		case '+' :
			calcResult = firstNumber + secondNumber;
			cout << firstNumber << " + " << secondNumber << " = " << fixed << setprecision (2) << calcResult << endl;
			break;

		case '-':
			calcResult = firstNumber - secondNumber;
			cout << firstNumber << " - " << secondNumber << " = " << fixed << setprecision (2) << calcResult << endl;
			break;

		case 'x':
			calcResult = firstNumber * secondNumber;
			cout << firstNumber << " x " << secondNumber << " = " << fixed << setprecision (2) << calcResult << endl;
			break;

		case '/':
			calcResult = firstNumber / secondNumber;
			cout << firstNumber << " / " << secondNumber << " = " << fixed << setprecision (2) << calcResult << endl;
			break;
	}
return 0;
}

/* 
	OUTPUT 

	[benji@Ryzenbox Week Four]$ ./calc.out
	This program is a simple calculator for adding, subtracting, multiplying, or dividing two numbers
	Enter the first number: 5
	Enter the symbol for your math operation ( '+', '-', 'x', or '/' ): +
	Enter the second number: 5
	5 + 5 = 10.00
	[benji@Ryzenbox Week Four]$ ./calc.out
	This program is a simple calculator for adding, subtracting, multiplying, or dividing two numbers
	Enter the first number: 5
	Enter the symbol for your math operation ( '+', '-', 'x', or '/' ): -
	Enter the second number: 5
	5 - 5 = 0.00
	[benji@Ryzenbox Week Four]$ ./calc.out
	This program is a simple calculator for adding, subtracting, multiplying, or dividing two numbers
	Enter the first number: 5
	Enter the symbol for your math operation ( '+', '-', 'x', or '/' ): /
	Enter the second number: 5
	5 / 5 = 1.00
	[benji@Ryzenbox Week Four]$ ./calc.out
	This program is a simple calculator for adding, subtracting, multiplying, or dividing two numbers
	Enter the first number: 5
	Enter the symbol for your math operation ( '+', '-', 'x', or '/' ): x
	Enter the second number: 5
	5 x 5 = 25.00
	[benji@Ryzenbox Week Four]$ 
*/
