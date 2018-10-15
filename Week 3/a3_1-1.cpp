#include <iostream> 
using namespace std;

int main () {

	string firstName, middleName, lastName, wholeName, stringSpace;
	stringSpace = " ";

	cout << "Enter a name in the format First Middle Last: ";
	cin >> firstName;
	cin >> middleName;
	cin >> lastName;
	wholeName = firstName + stringSpace + middleName + stringSpace + lastName;
	cout << firstName << endl;
	cout << middleName << endl;
	cout << lastName << endl;
	cout << firstName.substr(0,1) << middleName.substr(0,1) << lastName.substr(0,1) << endl;
	cout << middleName.substr(0,3) << endl;
	cout << wholeName.at(7) << endl;
	cout << wholeName.length() << endl;


return 0;
}

/* OUTPUT 

[benji@thinktop Week 3]$ ./strngManipulation
Enter a name in the format First Middle Last: James Tiberius Kirk
James
Tiberius
Kirk
JTK
Tib
i
19

END OUTPUT */