#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string message;
	cout << "Введите слово:" << endl;
	cin >> message;
	cout << "Вы ввели:" << endl << message << endl;

	SetConsoleCP(866);
	SetConsoleOutputCP(866);

	return 0;
}


