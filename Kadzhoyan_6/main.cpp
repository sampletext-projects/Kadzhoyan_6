#include <iostream>
#include <iomanip>

using namespace std;

double max(double k, double m)
{
	double res;
	if (k >= m)
	{
		res = k;
	}
	else
	{
		res = m;
	}
	return res;
}

int main()
{
	setlocale(LC_ALL, "russian");

	double x, y;

	cout << "Введите x: ";
	cin >> x;

	cout << "Введите y: ";
	cin >> y;

	double t = (max(x, y) - max(x * y, x - y)) / (1.5 + max(x * x, y * y));

	cout << "x: " << x << ", y: " << y << ", t: " << t << endl;

	system("pause");

	return 0;
}
