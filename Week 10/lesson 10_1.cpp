    #include <iostream>
    using namespace std;

    void drawHorizontalLine(int numXs);
    void draw2VerticalLines(int numSpaces, int numRows);
    void drawOneRow(int numSpaces);
    void getDimensions(int &width, int &height);
    void drawBox(int width, int height);

    int main()
    {
        int width;
        int height;

        getDimensions(width, height);
        drawBox(width, height);
    }

    void getDimensions(int &width, int &height)
    {
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter height: ";
        cin >> height;
    }

    void drawBox(int width, int height)
    {
        drawHorizontalLine(width);
        draw2VerticalLines(width-2, height-2);    
        drawHorizontalLine(width);
    }

    void drawHorizontalLine(int numXs)
    {
        int count;
        for (count = 0; count < numXs; count++){    
            cout << "X";
        }
        cout << endl;
    }

    void draw2VerticalLines(int numSpaces, int numRows)
    {
        int rowCount;

        for (rowCount = 0; rowCount < numRows; rowCount++){    
            drawOneRow(numSpaces);
        }
    }

    void drawOneRow(int numSpaces)
    {
        int spaceCount;

        cout << "X";
        for (spaceCount = 0; spaceCount < numSpaces; spaceCount++){    
            cout << " ";
        }
        cout << "X" << endl;
    }

