#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "RUS");

	double a, b, x1, x2, d, temp, x_max = -INFINITY, x_min = INFINITY, x;
	bool flag = true;
	cout << "Начало и конец отсчета." << endl;
	cin >> x1 >> x2;
	x = x1;
	cout << "Шаг:";
	cin >> d;
	cout << "Начало и конец нужного интервала." << endl;
	cin >> a >> b;
	cout << 'x' << " | " << 'y' << endl;

	for (int i = 0; i <= (x2 - x1) / d; i++, x += d) {

		if (x <= a)
			temp = abs(x) + sin(x);
		else
			if ((a < x) && (x < b)) 
				temp = (log(abs(x))) / log(3);
			else 
				if (x >= b)
					temp = tan(x);

		if ((x >= a) && (x <= b + d))
		{
			if (temp < x_min)
			{
				x_min = temp;
			}
			if (temp > x_max)
			{
				x_max = temp;
			}
		}
		cout << x << " | " << temp  << endl;
	}
	cout << endl;
	cout << "max: " << x_max << "  min: " << x_min << endl;
	system("pause");
	return 0;
}