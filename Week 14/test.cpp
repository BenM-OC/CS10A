#include <iostream>
using namespace std;

void printMonthBody(int calendarYear, int firstDay, int currentMonth);
int getYear();
int getFirstDay();
void printMonth(int calendarYear, int firstDay);
void printMonthHeader(int currentMonth);
bool isLeapYear(int calendarYear);




int main()
{
	int calendarYear = getYear();
	int firstDay = getFirstDay();
	printMonth(calendarYear, firstDay);
}



int getYear()
{
	int year;

	cout << "What year do you want a calendar for? ";
	cin >> year;
	return year;
}

int getFirstDay()
{
	int firstDay;

	cout << "What day of the week does January 1st fall on (0 for Sunday, 1 for Monday, etc)? ";
	cin >> firstDay;
	return firstDay;
}

void printMonth(int calendarYear, int firstDay)
{
	for (int currentMonth = 0; currentMonth < 12; currentMonth++){
		printMonthHeader(currentMonth);
		printMonthBody(calendarYear, firstDay, currentMonth);
	}
}

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

void printMonthBody(int calendarYear, int firstDay, int currentMonth)
{
	switch (currentMonth) {
		case 0: {
			for (int i = 0; i < (firstDay * 3); i ++) {
				cout << " ";
			}

			for (int i = 1; i <= 31; i++) {
				if (i < 10) {
					cout << "  " << i;	
					firstDay++;
				} else {
					cout << " " << i;
					firstDay++;
				}

				if ((firstDay % 7) == 0) {
					cout << endl;
					firstDay = 0;
				}	
			}
		} 
		
		
		case 1: 
			if (isLeapYear(calendarYear)) {	
				for (int i = 0; i < (firstDay * 3); i ++) {
					cout << " ";
				}

				for (int i = 1; i <= 29; i++) {
					if (i < 10) {
						cout << "  " << i;	
						firstDay++;
					} else {
						cout << " " << i;
						firstDay++;
					}

					if ((firstDay % 7) == 0) {
						cout << endl;
						firstDay = 0;
					}	
				}
			} else {
						
							for (int i = 0; i < firstDay; i ++) {
								cout << "   ";
							}

							for (int i = 1; i <= 28; i++) {
								if (i < 10) {
									cout << "  " << i;	
									firstDay++;
								} else {
									cout << " " << i;
									firstDay++;
								}

								if ((firstDay % 7) == 0) {
									cout << endl;
								}	
							
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