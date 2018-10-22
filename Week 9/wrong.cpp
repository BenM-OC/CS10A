#include <iostream>
#include <string>
#include <fstream>
using namespace std; 

//The purpose of this program is to count the number of words in the file the user wants to examine, and report back to the user how many words are in any given file
int main() 
{
	ifstream infile;
	string filename;
	string currentWord;
	int wordCounter;

	//User is prompted for the name of the file they want to count words for
	cout << "Enter the name of the file you want to open (or \"quit\"):  ";
	cin >> filename;

		//An attempt to open the file is made, if this attempt fails an error message is printed
		infile.open(filename);
		if (!infile) {
			cout << "Couldn't open file." << endl;
		//If the atempt is successul, the word counter is set to zero, and the stream value of the file is entered into currentWord, because currentWord is of the string data type, only the first string is held by the variable. 
		} else {
			wordCounter = 0;
			infile >> currentWord;
			//the value of infile is true and the wordCounter is incremented by one until infile becomes false, which happens when it enters an error state due to running out of strings to enter into currentWord
			while (infile) {
				wordCounter++;
				infile >> currentWord;
			}
			//after the wordCounter is incremented once for every string in the file, the file is closed. 
			infile.close();
		}
		//the file reports the amount of words counted in the file to the user, and prompts for another file to compute. 
		cout << "There are " << wordCounter << " words." << endl;
	return 0;
}

/* OUTPUT 

benji@ryzenbox:~/git/CS10A/Week 9$ ./countWords.out
Enter the name of the file you want to open (or "quit"):  1.txt
There are 7 words.
Enter the name of the file you want to open (or "quit"):  2.txt
There are 10 words.
Enter the name of the file you want to open (or "quit"):  3.txt
There are 21 words.
Enter the name of the file you want to open (or "quit"):  4.txt
There are 19 words.
Enter the name of the file you want to open (or "quit"):  5.txt
There are 22 words.
Enter the name of the file you want to open (or "quit"):  quit
benji@ryzenbox:~/git/CS10A/Week 9$ 

*/