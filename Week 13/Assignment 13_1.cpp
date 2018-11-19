#include <iostream>
using namespace std;

int getCalendarYear();
bool isLeapYear(int year);
void printCalendar(int year);
void printMonth(int year, int month);


int main()
{
	int year = getCalendarYear();

	printCalendar(year);

}





int getCalendarYear()
{
	int year;

	cout << "What year do you want a calandar for? ";
	cin >> year;
	return year;
}



void printCalendar(int year)
{
	int month;

	for(month = 0; month < 12; month++){
		printMonth(year, month);
	}
}



void printMonth(int year, int month) 
{
	switch (month) {
		case 0 :
			cout << "    January" << endl << "S M T W T F S" << endl << "-------------" << endl;
			break;

		case 1 :
			cout << "    February" << endl << "S M T W T F S" << endl << "-------------" << endl;
			break;

		case 2 :
			cout << "    March" << endl << "S M T W T F S" << endl << "-------------" << endl;
			break;

		case 3 :
			cout << "    April" << endl << "S M T W T F S" << endl << "-------------" << endl;
			break;

		case 4 :
			cout << "    May" << endl << "S M T W T F S" << endl << "-------------" << endl;
			break;

		case 5 :
			cout << "    June" << endl << "S M T W T F S" << endl << "-------------" << endl;
			break;

		case 6 :
			cout << "    July" << endl << "S M T W T F S" << endl << "-------------" << endl;
			break;

		case 7 :
			cout << "    August" << endl << "S M T W T F S" << endl << "-------------" << endl;
			break;

		case 8 :
			cout << "    September" << endl << "S M T W T F S" << endl << "-------------" << endl;
			break;

		case 9 :
			cout << "    October" << endl << "S M T W T F S" << endl << "-------------" << endl;
			break;

		case 10 :
			cout << "    November" << endl << "S M T W T F S" << endl << "-------------" << endl;
			break;

		case 11 :
			cout << "    December" << endl << "S M T W T F S" << endl << "-------------" << endl;
			break;
	}
}



bool isLeapYear(int year)
{
    if (year % 400 == 0){
        return true;
    }

    if (year % 100 == 0){   
        return false;
    }

    return year % 4 == 0;
}