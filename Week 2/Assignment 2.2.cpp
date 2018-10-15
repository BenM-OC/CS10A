#include <iostream>
using namespace std;

int main()
{
 double tempCelsius;
 double tempFahrenheit;

cout << "enter degrees Celsius: ";
cin >> tempCelsius;
tempFahrenheit = ((tempCelsius * 9) / 5) + 32;
cout << tempCelsius << " degrees Celsius is " << tempFahrenheit << " degrees Fahrenheit" << endl;

return 0;
}