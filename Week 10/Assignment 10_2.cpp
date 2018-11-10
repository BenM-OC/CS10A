#include <iostream>
using namespace std;

void drawRocket(int stageHeight, int rocketWidth, int numberOfStages);

void drawStages(int rocketWidth, int stageHeight, int numberOfStages);
void getDimensions(int &stageHeight, int &rocketWidth, int &numberOfStages);

void drawHorizontalLine(int numXsNeeded);
void draw2VerticalLines(int numSpaces, int numRows);
void drawOneRow(int numSpaces);
void drawCone(int RocketWidth);

int main()
{
	int stageHeight;
	int rocketWidth;
	int numberOfStages;

	getDimensions(stageHeight, rocketWidth, numberOfStages);
	drawRocket(stageHeight, rocketWidth, numberOfStages);

	cout << endl;
	cout << "There you go, your very own rocket!" << endl;

	return 0;
}






void getDimensions(int &stageHeight, int &rocketWidth, int &numberOfStages)
{
	cout << "Thank you for 'launching' NASA's build a rocket program!" << endl;
	cout << "Please enter your desired height for each stage of your rocket: ";
	cin >> stageHeight;

	while (stageHeight < 1) {
		if (stageHeight == 0) {
			cout << "'Size doesn't matter' is a lie, you need a stage height of atleast one to get off of the ground." << endl;

			cout << "Please enter your desired height for each stage of your rocket: ";
			cin >> stageHeight;


		} else if (stageHeight < 0) {
			cout << "A negative value for height... Do you think this is some kind of joke?" << endl;

			cout << "Please enter your desired height for each stage of your rocket: ";
			cin >> stageHeight;
		}
	}

	cout << "Great! Now, please enter your the desired width for each stage of your rocket: ";
	cin >> rocketWidth;

	while (rocketWidth < 1) {
		if (rocketWidth == 0) {
			cout << "'Size doesn't matter' is a lie, you need a rocket width of atleast one to get off of the ground." << endl;

			cout << "Please enter the desired width for each stage of your rocket: ";
			cin >> rocketWidth;

		} else if (rocketWidth < 0) {
			cout << "A negative value for width... Do you think this is some kind of joke?" << endl;

			cout << "Please enter your desired width for each stage of your rocket: ";
			cin >> rocketWidth;
		}
	}

	cout << "Thank you! Last bit of business, I promise. How many stages would you like in your rocket?: ";
	cin >> numberOfStages;

	while (numberOfStages < 1) {
		if (numberOfStages == 0) {
			cout << "I'd love to watch you try getting into space with nothing but two cones and your cheeky sense of humor, but you need atleast one stage for this rocket, so..." << endl;

			cout << "Please enter the number of stages you would like in your rocket: ";
			cin >> numberOfStages;

		} else if (numberOfStages < 0) {
			cout << "I'm a CS major, so I can't help you on your quest for a negative amount of matter, but if you tell me how many stages you want in your rocket I can get cracking on it. So..." << endl;

			cout << "Please enter the number of stages you would like in your rocket: ";
			cin >> numberOfStages;
		}
	}

	cout << endl;
}






void drawRocket(int stageHeight, int rocketWidth, int numberOfStages) 
{
	drawCone(rocketWidth);
	drawStages(stageHeight, rocketWidth, numberOfStages);
	drawCone(rocketWidth);
}





void drawCone(int rocketWidth) 
{

	int coneWidth = 0;
	int rowCounter = 0;
	int spacesCounter = 0;
	int XsPosition = 0;

	coneWidth = (rocketWidth * 0.5)  + 1;
	
	for (rowCounter = 1; rowCounter < coneWidth; rowCounter++) 
	{
		for (spacesCounter = rowCounter; spacesCounter < coneWidth; spacesCounter++){
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

}





void drawStages(int stageHeight, int rocketWidth, int numberOfStages)
{
	int numStagesPrinted = 0;

	while (numStagesPrinted < numberOfStages) {
		numStagesPrinted++;

		drawHorizontalLine(rocketWidth);
		draw2VerticalLines(rocketWidth-2, stageHeight-2);
		drawHorizontalLine(rocketWidth);
	}
}





void drawHorizontalLine(int numXsNeeded) {
	int numXsPrinted;

	for (numXsPrinted = 0; numXsPrinted < numXsNeeded; numXsPrinted++) {
		cout << "X";
	}
	cout << endl;
}





void draw2VerticalLines(int numSpaces, int numRows) 
{
	int numRowsPrinted;
	for (numRowsPrinted = 0; numRowsPrinted < numRows; numRowsPrinted++)
		drawOneRow(numSpaces);
}





void drawOneRow(int numSpaces)
{
	int spaceCount;

	cout << "X";
	for (spaceCount = 0; spaceCount < numSpaces; spaceCount++) {
		cout << " ";
	}

	cout << "X" << endl;
}



/* OUTPUT 
benji@ryzenbox:~/git/CS10A/Week 10$ ./'Assignment 10_2.out'
Thank you for 'launching' NASA's build a rocket program!
Please enter your desired height for each stage of your rocket: 6
Great! Now, please enter your the desired width for each stage of your rocket: 6
Thank you! Last bit of business, I promise. How many stages would you like in your rocket?: 1

  X
 X X
XXXXX
XXXXXX
X    X
X    X
X    X
X    X
XXXXXX
  X
 X X
XXXXX

There you go, your very own rocket!
benji@ryzenbox:~/git/CS10A/Week 10$ ./'Assignment 10_2.out'
Thank you for 'launching' NASA's build a rocket program!
Please enter your desired height for each stage of your rocket: 9
Great! Now, please enter your the desired width for each stage of your rocket: 9
Thank you! Last bit of business, I promise. How many stages would you like in your rocket?: 2

    X
   X X
  X   X
 X     X
XXXXXXXXX
XXXXXXXXX
X       X
X       X
X       X
X       X
X       X
X       X
X       X
XXXXXXXXX
XXXXXXXXX
X       X
X       X
X       X
X       X
X       X
X       X
X       X
XXXXXXXXX
    X
   X X
  X   X
 X     X
XXXXXXXXX

There you go, your very own rocket!
benji@ryzenbox:~/git/CS10A/Week 10$ 
*/