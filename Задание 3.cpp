#include <iostream>

int main()
{
	void func_1();
	void func_1();
	void func_2();
	void func_2();
	return 0;
}

void func_1()
{
	using std::cout;
	using std::endl;
	cout << "Three blind mice" << endl;
}

void func_2()
{
	using std::cout;
	using std::endl;
	cout << "See how they run" << endl;
}