#include <iostream>
using namespace std;

/*
The purpose of this program is to prompt the user for a couple of Calendar criteria such as the year 
they want the calendar to be for and the week day january 1st falls on. It takes this information and prints 
out the month header and body information of each month in that year
*/

void printMonthBody(int calendarYear, int &startDay, int currentMonth);
int getYear();
int getStartDay();
void printMonth(int calendarYear, int startDay);
void printMonthHeader(int currentMonth);
bool isLeapYear(int calendarYear);


/* 
The main fucntion gets the values of -
	calendarYear - what year the person would like a calendar for
	startDay - what day the 1st of january falls on 
and passes these values to printMonth
*/

int main()
{
	int calendarYear = getYear();
	int startDay = getStartDay();
	printMonth(calendarYear, startDay);
}



/*
The getYear fucntion prompts the user for a year value
and returns it to the main function so it can be assigned to 
variable "calendarYear"
*/

int getYear()
{
	int year;

	cout << "What year do you want a calendar for? ";
	cin >> year;
	return year;
}



/*
The getStartDay fucntion prompts the user for what day the first of 
January falls on and returns it to main so it can be assigned to the 
variable startDay
*/

int getStartDay()
{
	int startDay;

	cout << "What day of the week does January 1st fall on (0 for Sunday, 1 for Monday, etc)? ";
	cin >> startDay;
	return startDay;
}



/* 
The variable printMonth recieves the values for variable
calendarYear and startDay, executes a loop to print the 
header and body of the calendar month 12 times, passing 
the value of currentMonth to the printMonthHeader function
and passing the variables calendarYear, startDay, and currentMonth
to the printMonthBody function
*/

void printMonth(int calendarYear, int startDay)
{
	for (int currentMonth = 0; currentMonth < 12; currentMonth++){
		printMonthHeader(currentMonth);
		printMonthBody(calendarYear, startDay, currentMonth);
	}
}



/*
The printMonthHeader function executes a switch-case statement 
to print the correct header for each month based on the value of 
the variable currentMonth, which it recieved from the function
printMonth */

void printMonthHeader(int currentMonth)
{
	switch (currentMonth) {
		case 0 :
			cout << "        January" << endl << "  S  M  T  W  T  F  S" << endl << "---------------------" << endl;
			break;

		case 1 :
			cout << "        February" << endl << "  S  M  T  W  T  F  S" << endl << "---------------------" << endl;
			break;

		case 2 :
			cout << "        March" << endl << "  S  M  T  W  T  F  S" << endl << "---------------------" << endl;
			break;

		case 3 :
			cout << "        April" << endl << "  S  M  T  W  T  F  S" << endl << "---------------------" << endl;
			break;

		case 4 :
			cout << "        May" << endl << "  S  M  T  W  T  F  S" << endl << "---------------------" << endl;
			break;

		case 5 :
			cout << "        June" << endl << "  S  M  T  W  T  F  S" << endl << "---------------------" << endl;
			break;

		case 6 :
			cout << "        July" << endl << "  S  M  T  W  T  F  S" << endl << "---------------------" << endl;
			break;

		case 7 :
			cout << "        August" << endl << "  S  M  T  W  T  F  S" << endl << "---------------------" << endl;
			break;

		case 8 :
			cout << "        September" << endl << "  S  M  T  W  T  F  S" << endl << "---------------------" << endl;
			break;

		case 9 :
			cout << "        October" << endl << "  S  M  T  W  T  F  S" << endl << "---------------------" << endl;
			break;

		case 10 :
			cout << "        November" << endl << "  S  M  T  W  T  F  S" << endl << "---------------------" << endl;
			break;

		case 11 :
			cout << "        December" << endl << "  S  M  T  W  T  F  S" << endl << "---------------------" << endl;
			break;
	}
}



/* 
The function printMonthBody executes a switch-case statement 
to print the date section of the calendar, it's parameters are 
used like so: 
	calendarYear - Used to make sure february has 29 days on 
					leap years
	startDay - Used to give January 1st the appropriate prelim-spacing
				and subsequent months the spacing before their 1st dates
				according to the last day of the previous month
	currentMonth - Used to determine which case statement to execute
*/

void printMonthBody(int calendarYear, int &startDay, int currentMonth)
{
	switch (currentMonth) 
	{
		case 0: {
			for (int i = 0; i < (startDay * 3); i++) {
				cout << " ";
			}

			for (int i = 1; i <= 31; i++) {
				if (i < 10) {
					cout << "  " << i;	
					startDay++;
				} else {
					cout << " " << i;
					startDay++;
				}

				if ((startDay % 7) == 0) {
					cout << endl;
					startDay = 0;	
				} 
            }
        }
		
		break;

		case 1: {
			if (isLeapYear(calendarYear)) {	
				for (int i = 0; i < (startDay * 3); i++) {
					cout << " ";
				}

				for (int i = 1; i <= 29; i++) {
					if (i < 10) {
						cout << "  " << i;	
						startDay++;
					} else {
						cout << " " << i;
						startDay++;
					}

					if ((startDay % 7) == 0) {
						cout << endl;
						startDay = 0;
					}	
				}
			} else {	
				for (int i = 0; i < startDay; i++) {
					cout << "   ";
				}

				for (int i = 1; i <= 28; i++) {
					if (i < 10) {
						cout << "  " << i;	
						startDay++;
					} else {
						cout << " " << i;
						startDay++;
					}

					if ((startDay % 7) == 0) {
						cout << endl;
						startDay = 0;
					}	
				}
			}
		}
		break;

		case 2: {
			for (int i = 0; i < (startDay * 3); i++) {
				cout << " ";
			}

			for (int i = 1; i <= 31; i++) {
				if (i < 10) {
					cout << "  " << i;	
					startDay++;
				} else {
					cout << " " << i;
					startDay++;
				}

				if ((startDay % 7) == 0) {
					cout << endl;
					startDay = 0;	
				} 
            }
        }
		break;

		case 3: {
			for (int i = 0; i < (startDay * 3); i++) {
				cout << " ";
			}

			for (int i = 1; i <= 30; i++) {
				if (i < 10) {
					cout << "  " << i;	
					startDay++;
				} else {
					cout << " " << i;
					startDay++;
				}

				if ((startDay % 7) == 0) {
					cout << endl;
					startDay = 0;	
				} 
            }
        }
		break;

		case 4: {
			for (int i = 0; i < (startDay * 3); i++) {
				cout << " ";
			}

			for (int i = 1; i <= 31; i++) {
				if (i < 10) {
					cout << "  " << i;	
					startDay++;
				} else {
					cout << " " << i;
					startDay++;
				}

				if ((startDay % 7) == 0) {
					cout << endl;
					startDay = 0;	
				} 
            }
        }
		break;

		case 5: {
			for (int i = 0; i < (startDay * 3); i++) {
				cout << " ";
			}

			for (int i = 1; i <= 31; i++) {
				if (i < 10) {
					cout << "  " << i;	
					startDay++;
				} else {
					cout << " " << i;
					startDay++;
				}

				if ((startDay % 7) == 0) {
					cout << endl;
					startDay = 0;	
				} 
            }
        }
		break;

		case 6: {
			for (int i = 0; i < (startDay * 3); i++) {
				cout << " ";
			}

			for (int i = 1; i <= 31; i++) {
				if (i < 10) {
					cout << "  " << i;	
					startDay++;
				} else {
					cout << " " << i;
					startDay++;
				}

				if ((startDay % 7) == 0) {
					cout << endl;
					startDay = 0;	
				} 
            }
        }
		break;

		case 7:{
			for (int i = 0; i < (startDay * 3); i++) {
				cout << " ";
			}

			for (int i = 1; i <= 31; i++) {
				if (i < 10) {
					cout << "  " << i;	
					startDay++;
				} else {
					cout << " " << i;
					startDay++;
				}

				if ((startDay % 7) == 0) {
					cout << endl;
					startDay = 0;	
				} 
            }
        }
		break;

		case 8: {
			for (int i = 0; i < (startDay * 3); i++) {
				cout << " ";
			}

			for (int i = 1; i <= 30; i++) {
				if (i < 10) {
					cout << "  " << i;	
					startDay++;
				} else {
					cout << " " << i;
					startDay++;
				}

				if ((startDay % 7) == 0) {
					cout << endl;
					startDay = 0;	
				} 
            }
        }
			break;

		case 9: {
			for (int i = 0; i < (startDay * 3); i++) {
				cout << " ";
			}

			for (int i = 1; i <= 31; i++) {
				if (i < 10) {
					cout << "  " << i;	
					startDay++;
				} else {
					cout << " " << i;
					startDay++;
				}

				if ((startDay % 7) == 0) {
					cout << endl;
					startDay = 0;	
				} 
            }
        }
		break;

		case 10: {
			for (int i = 0; i < (startDay * 3); i++) {
				cout << " ";
			}

			for (int i = 1; i <= 30; i++) {
				if (i < 10) {
					cout << "  " << i;	
					startDay++;
				} else {
					cout << " " << i;
					startDay++;
				}

				if ((startDay % 7) == 0) {
					cout << endl;
					startDay = 0;	
				} 
            }
        }
		break;

		case 11: {
			for (int i = 0; i < (startDay * 3); i++) {
				cout << " ";
			}

			for (int i = 1; i <= 31; i++) {
				if (i < 10) {
					cout << "  " << i;	
					startDay++;
				} else {
					cout << " " << i;
					startDay++;
				}

				if ((startDay % 7) == 0) {
					cout << endl;
					startDay = 0;	
				} 
            }
        }
		break;	
	}
	cout << endl << endl;
}



/*
The function isLeapYear returns true if a number, 
in this case a year value, meets the criteria to
be a leap year, and false if it does not
*/

bool isLeapYear(int calendarYear)
{
    if (calendarYear % 400 == 0){
        return true;
    }

    if (calendarYear % 100 == 0){   
        return false;
    }

    return calendarYear % 4 == 0;
}



/*
OUTPUT
[benji@ryzenbox Week 14]$ ./clndr.out             
What year do you want a calendar for? 2002
What day of the week does January 1st fall on (0 for Sunday, 1 for Monday, etc)? 2
        January
  S  M  T  W  T  F  S
---------------------
        1  2  3  4  5
  6  7  8  9 10 11 12
 13 14 15 16 17 18 19
 20 21 22 23 24 25 26
 27 28 29 30 31

        February
  S  M  T  W  T  F  S
---------------------
                 1  2
  3  4  5  6  7  8  9
 10 11 12 13 14 15 16
 17 18 19 20 21 22 23
 24 25 26 27 28

        March
  S  M  T  W  T  F  S
---------------------
                 1  2
  3  4  5  6  7  8  9
 10 11 12 13 14 15 16
 17 18 19 20 21 22 23
 24 25 26 27 28 29 30
 31

        April
  S  M  T  W  T  F  S
---------------------
     1  2  3  4  5  6
  7  8  9 10 11 12 13
 14 15 16 17 18 19 20
 21 22 23 24 25 26 27
 28 29 30

        May
  S  M  T  W  T  F  S
---------------------
           1  2  3  4
  5  6  7  8  9 10 11
 12 13 14 15 16 17 18
 19 20 21 22 23 24 25
 26 27 28 29 30 31

        June
  S  M  T  W  T  F  S
---------------------
                    1
  2  3  4  5  6  7  8
  9 10 11 12 13 14 15
 16 17 18 19 20 21 22
 23 24 25 26 27 28 29
 30 31

        July
  S  M  T  W  T  F  S
---------------------
        1  2  3  4  5
  6  7  8  9 10 11 12
 13 14 15 16 17 18 19
 20 21 22 23 24 25 26
 27 28 29 30 31

        August
  S  M  T  W  T  F  S
---------------------
                 1  2
  3  4  5  6  7  8  9
 10 11 12 13 14 15 16
 17 18 19 20 21 22 23
 24 25 26 27 28 29 30
 31

        September
  S  M  T  W  T  F  S
---------------------
     1  2  3  4  5  6
  7  8  9 10 11 12 13
 14 15 16 17 18 19 20
 21 22 23 24 25 26 27
 28 29 30

        October
  S  M  T  W  T  F  S
---------------------
           1  2  3  4
  5  6  7  8  9 10 11
 12 13 14 15 16 17 18
 19 20 21 22 23 24 25
 26 27 28 29 30 31

        November
  S  M  T  W  T  F  S
---------------------
                    1
  2  3  4  5  6  7  8
  9 10 11 12 13 14 15
 16 17 18 19 20 21 22
 23 24 25 26 27 28 29
 30

        December
  S  M  T  W  T  F  S
---------------------
     1  2  3  4  5  6
  7  8  9 10 11 12 13
 14 15 16 17 18 19 20
 21 22 23 24 25 26 27
 28 29 30 31

[benji@ryzenbox Week 14]$
*/