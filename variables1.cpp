#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    double number = 0;
    cout << "Введите число:" << endl;
    cin >> number;
    cout << "Вы ввели:" << endl << number << endl;

    return 0;
}


