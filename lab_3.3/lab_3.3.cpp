// Lab_03_3.cpp
// Кобетяк Андрій
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 12

#include <iostream>

using namespace std;

int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -6)
		y = R;
	else
		if (-6 < x && x <= -1 * R)
			y = -1 * (R + x) / (R - 6);
		else
			if (-1 * R < x && x <= 0)
				y = pow(-1 * x * (2 * R + x), 0.5) + R;
			else
				if (0 < x && x <= R)
					y = pow((R + x) * (R - x), 0.5);
				else
					y = R - x;
	
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}