

#include <iostream>
using namespace std;
void time(int, int);


int main()
{
	int h;
	cout << "Enter the number of hours: ";
	cin >> h;
	int m;
	cout << "Enter the number of minutes: ";
	cin >> m;
	time(h, m);
	cin.get();
	cin.get();
	return 0;
}
void time(int j, int k)
{
	cout << "Time " << j << ":" << k << endl;
}
