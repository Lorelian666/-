
#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b, c;
	float d, e, imt;
	cout << "Введите Ваш рост: \n";
	cout << "Футов: ";
	cin >> a;
	cout << "\nДюймов: ";
	cin >> b;
	cout << "\nВведите Ваш вес в футах: ";
	cin >> c;

	d = ((a * 12) + b)*0.0254;
	imt = (c / 2.2) / ((((a * 12) + b)*0.0254)*(((a * 12) + b)*0.0254));

	cout << "\nИМТ = " << imt << "\n";

	system("Pause");
	return 0;
}