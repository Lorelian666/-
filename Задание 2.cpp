#include <iostream>
int main() {
	setlocale(LC_ALL, "Russian");
	using namespace std;

	const int fg = 220;

	cout << "Введите расстояние в фарлингах:___\b\b\b";
	unsigned short farling;
	cin >> farling;

	int yard;
	yard = farling * fg;
	
	cout << farling << "фарл. = "<< yard <<  " яр." << endl;


	cin.get();
	cin.get();

	return 0;
}
