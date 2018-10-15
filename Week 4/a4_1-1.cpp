#include <iostream>
#include <iomanip>
using namespace std;

/* The purpose of this software is to calculate the area of either a square or triangle based on user input. */

int main() { 
	double base, height, side, area;
	char shape;
	
// User tells the program what shape (s)he wants to calculate area for 

	cout << "Enter the type of figure (s or t): " ;
	cin >> shape; 

/* Based on user input the program prompts for relevant measurements, then calculates the area. If the user enters an invalid shape option, the program prompts for user input again */

	if (shape == 't') {
		cout << "Enter the base: ";
		cin >> base; 
		cout << "Enter the height: " ;
		cin >> height;
		area = (base * height) / 2;
		cout << "The area is: " << area << fixed << setprecision (1) << endl;
	} else {
		if  (shape == 's') {
			cout << "Enter the length of a side: ";
			cin >> side;
			area = side * side;
			cout << "The area is: " << area << fixed << setprecision(1) << endl;
		} else {																											
			main();
		}
	}
	return 0;
}

/* 
	OUTPUT 

	[benji@Ryzenbox Week Four]$ ./area.out
	Enter the type of figure (s or t): s
	Enter the length of a side: 15
	The area is: 225
	[benji@Ryzenbox Week Four]$ ./area.out
	Enter the type of figure (s or t): t
	Enter the base: 5
	Enter the height: 9
	The area is: 22.5
	[benji@Ryzenbox Week Four]$ 

*/

