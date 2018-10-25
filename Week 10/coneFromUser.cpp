#include <iostream>
using namespace std;

int main(/*rocketWidth*/)
{
	int rowCounter = 0;
	int spacesCounter = 0;
	int XsPosition = 0;

	for (rowCounter = 1; rowCounter < rocketWidth; rowCounter++) 
	{
		for (spacesCounter = rowCounter; spacesCounter < rocketWidth; spacesCounter++){
			cout << " ";
		}

		while (XsPosition != (2 * rowCounter - 1)) {
			if (XsPosition == 0 || XsPosition == 2 * rowCounter -2) {
				cout << "X";
			} else
				cout << " ";
				XsPosition++;
			}
			XsPosition = 0;
			cout << endl;
		}

		for (rowCounter = 0; rowCounter < 2 * rocketWidth -1; rowCounter++){
			cout << "X";
		}

		cout << endl;
}

/*

  X
 X X 
X   X

   X
  X X
 X   X
X     X


    X
   X X
  X   X
 X     X
X       X
*/