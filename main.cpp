#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;
double f(double x) {
	return x * x;
}
int main() {
	setlocale(LC_ALL, "Russian");
	double x, dX;
	while (true) {
		cout << "Введите число Х =  ";
		if (cin >> x) {
			break;
		}
		else {
			cout << "Введено не число" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
	}
	while (true) {
		cout << "Введите ненулевое число dX = ";
		if (cin >> dX && dX != 0) {
			break;
		}
		else {
			cout << "dX должно быть числом, но не 0" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
	}
	double Pravaya_formula = (f(x + dX) - f(x)) / dX;
	double Centralnaya_formula = (f(x + dX) - f(x - dX)) / (2 * dX);
	double Levaya_formula = (f(x) - f(x - dX)) / dX;
	cout << "Правая разностная производная = " << Pravaya_formula << endl;
	cout << "Центральная разностная производная = " << Centralnaya_formula << endl;
	cout << "Левая разностная производная = " << Levaya_formula << endl;
	return 0;
}
