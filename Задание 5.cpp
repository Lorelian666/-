// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <windows.h>

double func(double); 
using namespace std;

int main()
{
	setlocale(0, "Russian");

	double ae, sl;
	cout << "Введите количество световых лет: " << endl;
	cin >> sl; 
	ae = func(sl);
	cout << "световых лет = " << sl << endl;
	cout << "астрономических единиц = " << ae << endl;
	system("pause");
	return 0;
}

double func(double sl)
{
	return sl * 63240;
}