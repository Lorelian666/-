
#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float m, g, r;
	cout << "Введите сколько миль Вы проехали \n";
	cin >> m;
	cout << "Введите сколько галлонов бензина вы потратили \n";
	cin >> g;

	r = m / g;
	cout << "Cтолько миль на один галлон проезжает ваш автомобиль " << r << "\n";
	system("Pause");
	return 0;
	
}