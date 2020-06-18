#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "RUS");

	double a, b, x1, x2, x3, x4, d, temp, x_max = -INFINITY, x_min = INFINITY, x;
	bool flag = true;
	cout << "Начало и конец отсчета." << endl;
	cin >> x1 >> x2;
	cout << "Шаг:";
	cin >> d;
	cout << "Начало и конец нужного интервала." << endl;
	cin >> a >> b;
	cout << 'x' << " | " << 'y' << endl;
	x = x1;
	for (int i = 0; i <= (x2 - x1) / d; i++, x += d) 
	{
		if (x < a + 0.00001)
			temp = abs(x) + sin(x);
		else
			if ((a < x) && (x < b)) 
				temp = (log(abs(x))) / log(3);
			else 
				if (x >= b)
					temp = tan(x);

			if (temp < x_min)
			{
				x_min = temp;
				x3 = x;
			}
			if (temp > x_max)
			{
				x_max = temp;
				x4 = x;
			}

		cout << x << " | " << temp  << endl;
	}
	cout << endl;
	cout << "max: " << x4 << "|" << x_max << "  |  min: " << x3 << "|" << x_min << endl;
	system("pause");
	return 0;
}