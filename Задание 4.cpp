
#include <iostream>
using namespace std;

double func(double cel)
{
	return 1.8 * cel + 32;
}

int main()
{
	double far;
	double cels;
	cout << "Please enter a Celsium value: ";
	cin >> cels;

	far = func(cels);
	cout << cels << "degrees celsium is " << far << "degrees Fahrenheit." << endl;
}