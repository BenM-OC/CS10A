#include <iostream>
using namespace std;


void drawCone();
void drawBox();
void drawHorizontalLine();
void draw2VerticalLines();
void drawOneRow();




int main()
{
    drawCone();
    drawBox();
    drawBox();
    drawCone();
}


void drawCone()
{
    cout << "  X" << endl;
    cout << " X X" << endl;
    cout << "X   X" << endl;
}

void drawBox() 
{
    drawHorizontalLine();
    draw2VerticalLines();    
    drawHorizontalLine();
}

void drawHorizontalLine()    // this is a 
{                            // "function definition"
    int count;

    for (count = 0; count < 5; count++){
        cout << "X";
    }
    cout << endl;
}

void draw2VerticalLines()    // this is another
{                            // "function definition"
    int rowCount;

    for (rowCount = 0; rowCount < 2; rowCount++){
        drawOneRow();
    }
}

void drawOneRow()
{
    int spaceCount;

    cout << "X";
    for (spaceCount = 0; spaceCount < 3; spaceCount++){    
        cout << " ";
    }
    cout << "X" << endl;
}

