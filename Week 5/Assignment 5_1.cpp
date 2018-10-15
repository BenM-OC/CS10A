#include <iostream> 
#include <iomanip> 
using namespace std;

/*The purpose of this program is to calculate the gross and net cost of an intranational call from 1995 based on the following criteria:
	-Calls made after 6pm but before 8am are 50% discounted
	-All calls are taxed at 4%
	-The regular rate is $0.40 / minute
	-Calls longer than 60 min are discounted 15% (after other discounts are subtracted but before tax is added. 
*/

const double BASE_COST = 0.40;
const double FED_TAX = 0.04;
const double LONG_CALL_DISCOUNT = 0.15;
const double HAPPY_HOUR_DISCOUNT = 0.50;
const int LONG_CALL = 60;
const int SIX_PM = 1800;
const int EIGHT_AM = 800;

int main()
{
	int startTime;
	int callLength;
	double workingCost;
	double grossCost;
	double netCost;

	cout << "Thank you for using the 1995, intranational call cost calculator. This program will calculate the Gross and Net costs of your telephone call based on aplicable discounts and taxes." << endl;
	cout << "To get started, please enter the starting time of your call in military time (2:00 P.M. is 1400): ";
	cin >> startTime;
	cout << "Great! Now please enter the length of your call in minutes: ";
	cin >> callLength;

	grossCost = callLength * BASE_COST;
	cout << setprecision(2) << fixed << "Gross cost: $" << grossCost << endl;

	if ((startTime >= SIX_PM) || (startTime <= EIGHT_AM)) {
		workingCost = grossCost - (grossCost * HAPPY_HOUR_DISCOUNT);
	} else {
		workingCost = grossCost;
	}

	if (callLength > LONG_CALL) {
		workingCost = workingCost - (workingCost * LONG_CALL_DISCOUNT);
	} 

	netCost = workingCost + (workingCost * FED_TAX);
	cout << setprecision(2) << fixed << "Net Cost: $" << netCost << endl;

return 0;
}
	
/* OUTPUT 

[benji@thinktop Week 5]$ ./callCost.out
Thank you for using the 1995, intranational call cost calculator. This program will calculate the Gross and Net costs of your telephone call based on aplicable discounts and taxes.
To get started, please enter the starting time of your call in military time (2:00 P.M. is 1400): 2322
Great! Now please enter the length of your call in minutes: 67
Gross cost: $26.80
Net Cost: $11.85

[benji@thinktop Week 5]$ ./callCost.out
Thank you for using the 1995, intranational call cost calculator. This program will calculate the Gross and Net costs of your telephone call based on aplicable discounts and taxes.
To get started, please enter the starting time of your call in military time (2:00 P.M. is 1400): 759
Great! Now please enter the length of your call in minutes: 10
Gross cost: $4.00
Net Cost: $2.08

[benji@thinktop Week 5]$ ./callCost.out
Thank you for using the 1995, intranational call cost calculator. This program will calculate the Gross and Net costs of your telephone call based on aplicable discounts and taxes.
To get started, please enter the starting time of your call in military time (2:00 P.M. is 1400): 1300
Great! Now please enter the length of your call in minutes: 100
Gross cost: $40.00
Net Cost: $35.36

[benji@thinktop Week 5]$ ./callCost.out
Thank you for using the 1995, intranational call cost calculator. This program will calculate the Gross and Net costs of your telephone call based on aplicable discounts and taxes.
To get started, please enter the starting time of your call in military time (2:00 P.M. is 1400): 1300
Great! Now please enter the length of your call in minutes: 10
Gross cost: $4.00
Net Cost: $4.16

[benji@thinktop Week 5]$
