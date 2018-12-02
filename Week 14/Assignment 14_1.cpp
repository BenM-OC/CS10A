#include <iostream>
using namespace std;

int getCalendarYear();
int getstartDay();
void getCalendarRange(int &usersFirstMonth, int &usersLastMonth);
void printMonth(int year, int startDay, int usersFirstMonth, int usersLastMonth);
void printMonthHeader(int month);
void printMonthBody(int year, int month, int startDay);
bool isLeapYear(int year);

/*
The purpose of this program is to prompt the user for a couple of Calendar criteria such as the year 
they want the calendar to be for, the week day january 1st falls on, and the range of months they
wish to be presented with. It takes this information and prints out the month header and body
information. 
*/

int main()
{
	int usersFirstMonth;
	int usersLastMonth;
	int year = getCalendarYear();
	int startDay = getstartDay();

	getCalendarRange(usersFirstMonth, usersLastMonth);
	printMonth(year, startDay, usersFirstMonth, usersLastMonth);
}





int getCalendarYear()
{
	int year;

	cout << "What year do you want a calendar for? ";
	cin >> year;
	return year;
}



int getstartDay()
{
	int startDay;

	cout << "What day of the week does January 1st fall on (0 for Sunday, 1 for Monday, etc)? ";
	cin >> startDay;
	return startDay;
}



void getCalendarRange(int &usersFirstMonth, int &usersLastMonth)
{
	cout << "What is the first month you want to see calendar dates for? (0 for January, 1 for February, etc): ";
	cin >> usersFirstMonth;
	cout << "What is the last month you want to see calendar dates for? (Input the same value for a single month): ";
	cin >> usersLastMonth;
}



void printMonth(int year, int startDay, int usersFirstMonth, int usersLastMonth) 
{
	int month;

	for(month = usersFirstMonth; month <= usersLastMonth; month++){
		printMonthHeader(month);
		printMonthBody(year, month, startDay);
	}
}



void printMonthHeader(int month)
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

void printMonthBody(int year, int month, int startDay)
{
	for (int i = 0; i < (startDay * 2); i++) {
		cout << " ";
	}

	switch (month) {
		case 0: 
			for (int i = 1; i <= 31; i++) {
				if (i % 7 == 0) {
					cout << endl;
				}
				cout << i << " ";
			}
			break;

		case 1: 
			if (isLeapYear(year)) {
				for (int i = 1; i <= 29; i++) {
					cout << i << " ";
				}
			} else {
				for (int i = 1; i <= 28; i++) {
					cout << i << " ";
				}
			}
			break;

		case 2: 
			for (int i = 1; i <= 31; i++) {
				cout << i << " ";
			}
			break;

		case 3: 
			for (int i = 1; i <= 30; i++) {
				cout << i << " ";
			}
			break;

		case 4: 
			for (int i = 1; i <= 31; i++) {
				cout << i << " ";
			}
			break;

		case 5: 
			for (int i = 1; i <= 30; i++) {
				cout << i << " ";
			}
			break;

		case 6: 
			for (int i = 1; i <= 31; i++) {
				cout << i << " ";
			}
			break;

		case 7:
			for (int i = 1; i <= 31; i++) {
				cout << i << " ";
			}
			break;

		case 8: 
			for (int i = 1; i <= 30; i++) {
				cout << i << " ";
			}
			break;

		case 9: 
			for (int i = 1; i <= 31; i++) {
				cout << i << " ";
			}
			break;

		case 10: 
			for (int i = 1; i <= 30; i++) {
				cout << i << " ";
			}
			break;

		case 11: 
			for (int i = 1; i <= 31; i++) {
				cout << i << " ";
			}	
			break;	
	}
	cout << endl << endl;
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

/* Output
What is the last month you want to see calendar dates for? (Input the same value for a single month): 11
    January
S M T W T F S
-------------
      1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 

    February
S M T W T F S
-------------
      1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 

    March
S M T W T F S
-------------
      1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 

    April
S M T W T F S
-------------
      1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 

    May
S M T W T F S
-------------
      1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 

    June
S M T W T F S
-------------
      1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 

    July
S M T W T F S
-------------
      1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 

    August
S M T W T F S
-------------
      1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 

    September
S M T W T F S
-------------
      1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 

    October
S M T W T F S
-------------
      1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 

    November
S M T W T F S
-------------
      1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 

    December
S M T W T F S
-------------
      1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 

[benji@ryzenbox Week 13]$ 
*/